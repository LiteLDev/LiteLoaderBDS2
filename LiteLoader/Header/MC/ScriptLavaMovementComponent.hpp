// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptLavaMovementComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptLavaMovementComponent : public AttributeScriptActorComponent {
#include "Extra/ScriptLavaMovementComponentAPI.hpp"
public:
    virtual ~ScriptLavaMovementComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptLavaMovementComponent> bind(struct Scripting::Version);
};