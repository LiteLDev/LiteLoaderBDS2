// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MoveToBlockGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MoveToBlockGoal {
#include "Extra/MoveToBlockGoalAPI.hpp"
public:
    virtual ~MoveToBlockGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();

private:
    MCAPI void _checkIfStuck();
    MCAPI bool _isValidTarget(class Block const&) const;
    MCAPI void _moveToBlock();
    MCAPI bool _pathIsValid(class Path const*);
};