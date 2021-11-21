// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptPluginAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptPlugin {
#include "Extra/ScriptPluginAPI.hpp"
public:
    virtual ~ScriptPlugin();
    virtual class std::optional<std::string> onLoadScript(std::string const&);

public:
    MCAPI ScriptPlugin(class ScriptPlugin&&);
    MCAPI bool hasErrors() const;
    MCAPI std::vector<std::string> reportErrors() const;


private:
    MCAPI class std::optional<std::string> _loadScript(std::string const&);
};