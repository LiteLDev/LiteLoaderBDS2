// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MinecartBlockCommandOriginAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MinecartBlockCommandOrigin : public BlockCommandOrigin {
#include "Extra/MinecartBlockCommandOriginAPI.hpp"
public:
    virtual ~MinecartBlockCommandOrigin();
    virtual std::string const& getRequestId();
    virtual class BlockPos getBlockPosition();
    virtual class Vec3 getWorldPosition();
    virtual class Level* getLevel();
    virtual class Actor* getEntity();
    virtual int /*enum CommandPermissionLevel*/ getPermissionsLevel();
    virtual std::unique_ptr<class CommandOrigin> clone();
    virtual class std::optional<class BlockPos> getCursorHitBlockPos();
    virtual class std::optional<class Vec3> getCursorHitPos();
    virtual bool canUseAbility(int /*enum AbilitiesIndex*/);
    virtual bool canUseCommandsWithoutCheatsEnabled();
    virtual bool isSelectorExpansionAllowed();
    virtual unsigned char getSourceSubId();
    virtual void unk_vfn_20();
    virtual void unk_vfn_22();
    virtual void unk_vfn_24();
    virtual void handleCommandOutputCallback(class Json::Value&&);
    virtual class CompoundTag serialize();
    virtual bool isValid();
    virtual class BaseCommandBlock* _getBaseCommandBlock(class BlockSource&);
    virtual class CommandBlockActor* _getBlockEntity(class BlockSource&);

public:
    MCAPI MinecartBlockCommandOrigin(class BlockSource&, struct ActorUniqueID const&);

    MCAPI static std::unique_ptr<class MinecartBlockCommandOrigin> load(class CompoundTag const&, class Level&);
};