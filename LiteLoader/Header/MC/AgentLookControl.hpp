// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AgentLookControlAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AgentLookControl {
#include "Extra/AgentLookControlAPI.hpp"
public:
    virtual ~AgentLookControl();
    virtual void initializeInternal(class Mob&);
    virtual void tick(class Mob&);

public:
    MCAPI static float sBaseYMax;
};