// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/JumpControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class JumpControl {
#include "Extra/JumpControlAPI.hpp"
public:
    virtual ~JumpControl();
    virtual void unk_vfn_1();
    virtual void tick(class JumpControlComponent&, class Mob&);
    virtual void unk_vfn_3();
    virtual float getJumpPower(class JumpControlComponent const&, class Mob const&);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
};