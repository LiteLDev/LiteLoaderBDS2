// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BalloonComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BalloonComponent {
#include "Extra/BalloonComponentAPI.hpp"

public:
    MCAPI BalloonComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI void computeMaxHeight(class Actor&);
    MCAPI void detach(class Actor&);
    MCAPI class Actor* getAttachedActor(class Actor&);
    MCAPI float getMaxHeight() const;
    MCAPI void integrate(class Actor&);
    MCAPI void onRemoved(class Actor&, bool);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setAttachedActor(class Actor&, class Actor&);
    MCAPI bool shouldPop(class Actor&, bool&);

    MCAPI static std::string const ATTACHED_TAG;
    MCAPI static float const FENCE_BALLOON_RANGE;
    MCAPI static float const MAX_BALLOON_RANGE;
    MCAPI static std::string const MAX_HEIGHT_TAG;
    MCAPI static std::string const SHOULD_DROP_TAG;
    MCAPI static class Actor* getBalloonForActor(class Actor const&);
};