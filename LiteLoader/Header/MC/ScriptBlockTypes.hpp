// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBlockTypesAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBlockTypes {
#include "Extra/ScriptBlockTypesAPI.hpp"

public:
    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptBlockType> get(class Scripting::WeakLifetimeScope&, std::string const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBlockTypes> bind(struct Scripting::Version);
};