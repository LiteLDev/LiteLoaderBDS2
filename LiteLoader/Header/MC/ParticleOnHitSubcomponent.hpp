// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ParticleOnHitSubcomponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ParticleOnHitSubcomponent {
#include "Extra/ParticleOnHitSubcomponentAPI.hpp"
public:
    virtual ~ParticleOnHitSubcomponent();
    virtual void readfromJSON(class Json::Value&, class SemVersion const&);
    virtual void writetoJSON(class Json::Value&);
    virtual void doOnHitEffect(class Actor&, class ProjectileComponent&);
    virtual char const* getName();

private:
    MCAPI bool isParticleTypeIconBreak() const;
};