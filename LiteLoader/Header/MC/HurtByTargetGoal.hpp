// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HurtByTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HurtByTargetGoal : public TargetGoal {
#include "Extra/HurtByTargetGoalAPI.hpp"
public:
    virtual ~HurtByTargetGoal();
    virtual bool canUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void unk_vfn_5();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void alertOther(class Mob*, class Mob*);
};