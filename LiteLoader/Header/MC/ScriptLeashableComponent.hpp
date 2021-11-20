// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptLeashableComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptLeashableComponent : public ScriptActorComponent {
#include "Extra/ScriptLeashableComponentAPI.hpp"
public:
    virtual ~ScriptLeashableComponent();

public:
    MCAPI class Scripting::Result<float> getSoftDistance() const;
    MCAPI class Scripting::Result<void> leash(class ScriptActor&) const;
    MCAPI class Scripting::Result<void> unleash() const;

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptLeashableComponent> bind(struct Scripting::Version);
};