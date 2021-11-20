// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerActorDroppedItemEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerActorDroppedItemEvent {
#include "Extra/ScriptServerActorDroppedItemEventAPI.hpp"
public:
    virtual ~ScriptServerActorDroppedItemEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI void setActorId(struct ActorUniqueID const&);
    MCAPI void setItemStack(class ItemInstance const&);

private:
    MCAPI static class HashedString const mHash;
};