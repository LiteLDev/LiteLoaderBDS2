// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerBlockDestructionStoppedEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerBlockDestructionStoppedEvent {
#include "Extra/ScriptServerBlockDestructionStoppedEventAPI.hpp"
public:
    virtual ~ScriptServerBlockDestructionStoppedEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerBlockDestructionStoppedEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);
    MCAPI void setProgress(float);


private:
    MCAPI static class HashedString const mHash;
};