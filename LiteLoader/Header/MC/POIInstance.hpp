// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/POIInstanceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class POIInstance {
#include "Extra/POIInstanceAPI.hpp"

public:
    MCAPI class BlockPos const& getPosition() const;
    MCAPI float getRadius() const;
    MCAPI class AABB getSecondBlockFullAABB(class BlockSource&);
    MCAPI class HashedString const& getSoundEvent() const;
    MCAPI void incrementArrivalFailureCount();
    MCAPI void resetArrivalFailureCount();
    MCAPI void trySpawnParticles(class BlockSource&, class Random&, int) const;
    MCAPI bool useBoundingBox() const;
};