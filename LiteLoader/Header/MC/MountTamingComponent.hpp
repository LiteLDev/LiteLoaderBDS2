// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MountTamingComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MountTamingComponent {
#include "Extra/MountTamingComponentAPI.hpp"

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI void becomeTame(class Actor&, bool);
    MCAPI int& getCounter();
    MCAPI bool getInteraction(class Actor&, class Player&, class ActorInteraction&);
    MCAPI int& getTemper();
    MCAPI int getTemperMod() const;
    MCAPI int getWaitCount() const;
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void tameToPlayer(class Actor&, class Player&, bool);
};