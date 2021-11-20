// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RaidAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Raid {
#include "Extra/RaidAPI.hpp"

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    MCAPI float getBossBarFilledFraction() const;
    MCAPI unsigned __int64 getRemainingRaiders() const;
    MCAPI void readAdditionalSaveData(class CompoundTag const&);
    MCAPI void tick();

    MCAPI static class Vec3 const INVALID_SPAWN_POINT;

private:
    MCAPI void _tickGroupInPlay();

    MCAPI static unsigned char const NUM_GROUPS_ON_EASY;
    MCAPI static unsigned char const NUM_GROUPS_ON_HARD;
    MCAPI static unsigned char const NUM_GROUPS_ON_NORMAL;
};