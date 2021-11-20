// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RamAttackGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RamAttackGoal {
#include "Extra/RamAttackGoalAPI.hpp"
public:
    virtual ~RamAttackGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual void unk_vfn_17();

private:
    MCAPI bool _hasChargePath();
    MCAPI bool _pathablePos(class BlockSource const&, class BlockPos);
    MCAPI void _resetCooldown();
    MCAPI void _tryKnockbackTarget();

protected:
    MCAPI bool _initiateRamAttack();
};