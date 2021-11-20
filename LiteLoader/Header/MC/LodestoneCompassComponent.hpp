// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LodestoneCompassComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LodestoneCompassComponent {
#include "Extra/LodestoneCompassComponentAPI.hpp"

public:
    MCAPI class LodestoneCompassComponent& operator=(class LodestoneCompassComponent&&);
    MCAPI int getAnimationFrame(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&, class BlockPos const&, class AutomaticID<class Dimension, int> const&);
    MCAPI void initialize(class PositionTrackingId const&);
    MCAPI void setTrackOnlyInSameDimension(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&, bool);

    MCAPI static int getSpinningAnimationFrame();
    MCAPI static class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> makeCalculatorId(struct ActorUniqueID const&);

private:
    MCAPI class LodestoneCompassComponentCalculator* _findCalculator(class std::variant<struct ActorUniqueID, struct std::pair<class BlockPos, class AutomaticID<class Dimension, int>>> const&, bool);

    MCAPI static class CompassSpriteCalculator mSpinningLodestone;
};