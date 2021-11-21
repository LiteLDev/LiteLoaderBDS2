// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ArrowEffectSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ArrowEffectSubcomponent : public MobEffectSubcomponent {
#include "Extra/ArrowEffectSubcomponentAPI.hpp"
public:
    virtual ~ArrowEffectSubcomponent();
    virtual void writetoJSON(class Json::Value&);
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();
};