// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AgentCommandExecutionGoalAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AgentCommandExecutionGoal {
#include "Extra/AgentCommandExecutionGoalAPI.hpp"
public:
    virtual ~AgentCommandExecutionGoal();
    virtual bool canUse();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void start();
    virtual void stop();
    virtual void unk_vfn_6();
    virtual void appendDebugInfo(std::string&);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
};