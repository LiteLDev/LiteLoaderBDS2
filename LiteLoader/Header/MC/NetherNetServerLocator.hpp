// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NetherNetServerLocatorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetherNetServerLocator : public StubServerLocator {
#include "Extra/NetherNetServerLocatorAPI.hpp"
public:
    virtual ~NetherNetServerLocator();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void startAnnouncingServer(std::string const&, std::string const&, int /*enum GameType*/, int, int, bool);
    virtual void stopAnnouncingServer();
    virtual void startServerDiscovery(struct PortPair);
    virtual void stopServerDiscovery();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual std::vector<struct PingedCompatibleServer> getServerList();
    virtual void clearServerList();
    virtual void update();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();

public:
    MCAPI NetherNetServerLocator();


private:
    MCAPI void _onBroadcastResponseCallback(unsigned __int64, void const*, int);
    MCAPI void _setBroadcastDiscoveryResponse(struct NetherNetServerLocator::ServerData const&);
    MCAPI void _setIsDiscovering(bool);
    MCAPI struct PingedCompatibleServer _transformFrom(unsigned __int64, struct NetherNetServerLocator::ServerData const&);
};