// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptFlyingSpeedComponentFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptFlyingSpeedComponentFactory {
#include "Extra/ScriptFlyingSpeedComponentFactoryAPI.hpp"
public:
    virtual ~ScriptFlyingSpeedComponentFactory();
    virtual class Scripting::StrongObjectHandle createComponent(class WeakEntityRef, class Scripting::WeakLifetimeScope const&, std::string const&);
    virtual bool hasComponent(class WeakEntityRef);
};