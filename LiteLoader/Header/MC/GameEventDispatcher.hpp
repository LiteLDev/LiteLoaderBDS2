// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GameEventDispatcherAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GameEventDispatcher {
#include "Extra/GameEventDispatcherAPI.hpp"

public:
    MCAPI void post(class GameEvent const&, class BlockPos const&, class Actor const*, class BlockSource&);
    MCAPI void registerListener(class GameEventListener&);
    MCAPI void unregisterListener(class GameEventListener&);
};