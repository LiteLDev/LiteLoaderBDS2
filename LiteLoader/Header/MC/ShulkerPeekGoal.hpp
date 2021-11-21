// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ShulkerPeekGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShulkerPeekGoal {
#include "Extra/ShulkerPeekGoalAPI.hpp"
public:
    virtual ~ShulkerPeekGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

public:
    MCAPI ShulkerPeekGoal(class Mob&);
};