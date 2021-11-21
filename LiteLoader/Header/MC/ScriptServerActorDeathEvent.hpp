// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerActorDeathEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerActorDeathEvent {
#include "Extra/ScriptServerActorDeathEventAPI.hpp"
public:
    virtual ~ScriptServerActorDeathEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI ScriptServerActorDeathEvent();
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setBlockPos(class BlockPos const&);
    MCAPI void setCause(std::string const&);
    MCAPI void setKillerId(struct ActorUniqueID const&);
    MCAPI void setProjectile(enum ActorType const&);


private:
    MCAPI static class HashedString const mHash;
};