// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InstantaneousAttributeBuffAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InstantaneousAttributeBuff : public AttributeBuff {
#include "Extra/InstantaneousAttributeBuffAPI.hpp"
public:
    virtual ~InstantaneousAttributeBuff();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();

public:
    MCAPI InstantaneousAttributeBuff(float, enum AttributeBuffType);
};