// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NearestAttackableTargetDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NearestAttackableTargetDefinition {
#include "Extra/NearestAttackableTargetDefinitionAPI.hpp"
public:
    virtual ~NearestAttackableTargetDefinition();
    virtual void unk_vfn_1();
    virtual bool validate(class Mob&);

public:
    MCAPI void initialize(class EntityContext&, class NearestAttackableTargetGoal&);
};