// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MoveTowardsTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MoveTowardsTargetGoal {
#include "Extra/MoveTowardsTargetGoalAPI.hpp"
public:
    virtual ~MoveTowardsTargetGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
};