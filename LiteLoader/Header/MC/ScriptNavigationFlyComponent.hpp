// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptNavigationFlyComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptNavigationFlyComponent : public NavigationScriptActorComponent {
#include "Extra/ScriptNavigationFlyComponentAPI.hpp"
public:
    virtual ~ScriptNavigationFlyComponent();

public:
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptNavigationFlyComponent> bind(struct Scripting::Version);
};