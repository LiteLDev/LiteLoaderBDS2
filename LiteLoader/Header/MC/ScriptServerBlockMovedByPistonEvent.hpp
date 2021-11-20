// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptServerBlockMovedByPistonEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptServerBlockMovedByPistonEvent {
#include "Extra/ScriptServerBlockMovedByPistonEventAPI.hpp"
public:
    virtual ~ScriptServerBlockMovedByPistonEvent();
    virtual bool _serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle&);

public:
    MCAPI void setBlockPos(class BlockPos const&);
    MCAPI void setPistonAction(std::string);
    MCAPI void setPistonPos(class BlockPos const&);

private:
    MCAPI static class HashedString const mHash;
};