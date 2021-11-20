// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EndGatewayBlockActorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EndGatewayBlockActor : public BlockActor {
#include "Extra/EndGatewayBlockActorAPI.hpp"
public:
    virtual ~EndGatewayBlockActor();
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool save(class CompoundTag&);
    virtual void saveBlockData(class CompoundTag&, class BlockSource&);
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void onCustomTagLoadDone(class BlockSource&);
    virtual void tick(class BlockSource&);
    virtual void onChanged(class BlockSource&);
    virtual void onPlace(class BlockSource&);
    virtual void unk_vfn_12();
    virtual void onRemoved(class BlockSource&);
    virtual void triggerEvent(int, int);
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void unk_vfn_21();
    virtual std::string getName();
    virtual std::string getImmersiveReaderText(class BlockSource&);
    virtual void unk_vfn_26();
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual void unk_vfn_28();
    virtual void unk_vfn_29();
    virtual void unk_vfn_30();
    virtual void unk_vfn_31();
    virtual void unk_vfn_32();
    virtual void unk_vfn_33();
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool _playerCanUpdate(class Player const&);

public:
    MCAPI void setExitPosition(class BlockPos const&);
    MCAPI void teleportEntity(class Actor&);

    MCAPI static int const COOLDOWN_TIME;
    MCAPI static int const EVENT_COOLDOWN;
    MCAPI static int const SPAWN_TIME;
    MCAPI static class BlockPos findExitPortal(class WorldGenerator&, class BlockPos const&);
    MCAPI static class BlockPos findValidSpawnAround(class BlockSource&, class BlockPos const&, bool, int);

private:
    MCAPI static int _getHighestSection(class WorldGenerator&, class BlockVolume&, class BlockPos const&);
};