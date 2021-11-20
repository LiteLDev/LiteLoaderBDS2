// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InsomniaComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InsomniaComponent {
#include "Extra/InsomniaComponentAPI.hpp"

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI int getInsomniaTimerTicks() const;
    MCAPI int getTicksUntilInsomnia() const;
    MCAPI int incrementTimeSinceRest();
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void restartTimer();
};