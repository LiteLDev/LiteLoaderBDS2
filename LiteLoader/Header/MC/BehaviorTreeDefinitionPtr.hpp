// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BehaviorTreeDefinitionPtrAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BehaviorTreeDefinitionPtr {
#include "Extra/BehaviorTreeDefinitionPtrAPI.hpp"

public:
    MCAPI BehaviorTreeDefinitionPtr(class BehaviorTreeDefinitionPtr&&);
    MCAPI class BehaviorTreeDefinitionPtr& operator=(class BehaviorTreeDefinitionPtr&&);
    MCAPI BehaviorTreeDefinitionPtr();
    MCAPI ~BehaviorTreeDefinitionPtr();

    MCAPI static class BehaviorTreeDefinitionPtr const NONE;


protected:
    MCAPI void _deref();
};