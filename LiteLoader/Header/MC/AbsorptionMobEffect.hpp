// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AbsorptionMobEffectAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AbsorptionMobEffect : public MobEffect {
#include "Extra/AbsorptionMobEffectAPI.hpp"
public:
    virtual ~AbsorptionMobEffect();
    virtual void applyEffects(class Actor*, int, int);
    virtual void removeEffects(class Actor*);
    virtual void unk_vfn_4();
};