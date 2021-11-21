// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HideComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HideComponent {
#include "Extra/HideComponentAPI.hpp"

public:
    MCAPI HideComponent();
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI void initFromDefinition(class Actor&);
    MCAPI bool isInRaid();
    MCAPI bool isReactingToBell();
    MCAPI void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setInRaid();
    MCAPI void setNotHiding();
    MCAPI void setReactingToBell();
};