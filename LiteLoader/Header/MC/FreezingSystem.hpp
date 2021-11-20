// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FreezingSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FreezingSystem : public ITickingSystem {
#include "Extra/FreezingSystemAPI.hpp"
public:
    virtual ~FreezingSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);

public:
    MCAPI static class mce::UUID const FREEZE_EFFECT_UUID;
    MCAPI static int const VULNERABLE_MOB_FREEZE_DAMAGE;
};