// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptUnderwaterMovementComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptUnderwaterMovementComponent : public AttributeScriptActorComponent {
#include "Extra/ScriptUnderwaterMovementComponentAPI.hpp"
public:
    virtual ~ScriptUnderwaterMovementComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptUnderwaterMovementComponent> bind(struct Scripting::Version);
};