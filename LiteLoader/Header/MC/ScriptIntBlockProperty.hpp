// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptIntBlockPropertyAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptIntBlockProperty {
#include "Extra/ScriptIntBlockPropertyAPI.hpp"
public:
    virtual ~ScriptIntBlockProperty();

public:
    MCAPI class Scripting::Result<int> getState() const;
    MCAPI class ScriptIntBlockProperty& operator=(class ScriptIntBlockProperty&&);
    MCAPI ScriptIntBlockProperty(std::string const&, class ItemState const&, std::vector<int>, class ScriptBlockPermutation&);
    MCAPI ScriptIntBlockProperty(class ScriptIntBlockProperty&&);
    MCAPI std::vector<int> const& getAllValues() const;
    MCAPI std::string const& getName() const;
    MCAPI class Scripting::Result<void> setState(int);
};