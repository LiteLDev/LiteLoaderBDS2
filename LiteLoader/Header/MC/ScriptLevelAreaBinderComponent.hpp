// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptLevelAreaBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptLevelAreaBinderComponent {
#include "Extra/ScriptLevelAreaBinderComponentAPI.hpp"
public:
    virtual ~ScriptLevelAreaBinderComponent();
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI ScriptLevelAreaBinderComponent();
    MCAPI ScriptLevelAreaBinderComponent(class ITickingArea const&);
    MCAPI class mce::UUID const& getIdentifier() const;

    MCAPI static std::string const TAG;
};