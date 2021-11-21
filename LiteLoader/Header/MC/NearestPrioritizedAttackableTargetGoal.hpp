// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NearestPrioritizedAttackableTargetGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NearestPrioritizedAttackableTargetGoal : public NearestAttackableTargetGoal {
#include "Extra/NearestPrioritizedAttackableTargetGoalAPI.hpp"
public:
    virtual ~NearestPrioritizedAttackableTargetGoal();
    virtual void unk_vfn_3();
    virtual void unk_vfn_5();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual struct ActorUniqueID _findTarget(struct MobDescriptor const**);

public:
    MCAPI NearestPrioritizedAttackableTargetGoal(class Mob&, std::vector<struct MobDescriptor> const&, float, int, bool, int, bool, bool, int, float, bool, int, bool);
};