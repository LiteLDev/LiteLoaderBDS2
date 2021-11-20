#include <HookAPI.h>
#include <MC/Actor.hpp>
#include <MC/Mob.hpp>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/NetworkIdentifier.hpp>

#include <MC/Packet.hpp>
#include <MC/InventoryTransactionPacket.hpp>
#include <Config.h>
#include <unordered_map>
#include <LoggerAPI.h>
using namespace LL;

//Fix disconnect packet crash bug
TInstanceHook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVDisconnectPacket@@@Z",
    ServerNetworkHandler, NetworkIdentifier* ni, void* packet)
{
    if (globalConfig.enableFixDisconnectBug) {
        if (!_getServerPlayer(*ni, 0))
            return;
    }
    return original(this, ni, packet);
}


//Fix the listening port twice
//From https://github.com/Redbeanw44602/FixIPLogger

bool a_call = true;
THook(__int64, "?LogIPSupport@RakPeerHelper@@AEAAXXZ",
      void* _this)
{
    if (globalConfig.enableFixListenPort) {
        if (a_call) {
            a_call = false;
            return original(_this);
        }
        return 0;
    } else {
        return original(_this);
    }
}

class InventoryTransaction;
THook(void*, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVInventoryTransactionPacket@@@Z",
    ServerNetworkHandler& snh, NetworkIdentifier const& netid, InventoryTransactionPacket* pk)
{
    InventoryTransaction* data = (InventoryTransaction*)(*((__int64*)pk+10)+16);
    auto a    = dAccess<std::unordered_map<int, void*>, 0>(data);
    bool abnormal = 0;
    for (auto i :a)
        if (i.first == 99999) {
            abnormal = 1;
        }
    if (abnormal) {
        Player* sp = (Player*)snh.getServerPlayer(netid);
        Logger::Warn() << "Player("<< sp->getRealName()<<") item data error!" << Logger::endl;
        return nullptr;
    }
    return original(snh, netid, pk);
}