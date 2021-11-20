// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GameEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GameEvent {
#include "Extra/GameEventAPI.hpp"

public:
    MCAPI enum GameEventConfig::GameEvents const getEventType() const;
    MCAPI float getRadius() const;
    MCAPI unsigned __int64 getRadiusSqrd() const;
};