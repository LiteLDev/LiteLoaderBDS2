// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorAnimationControllerStateAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorAnimationControllerState {
#include "Extra/ActorAnimationControllerStateAPI.hpp"

public:
    MCAPI class StateAnimationVariable& addVariable(std::string const&);
    MCAPI void setBlendTransitionTime(float);
};