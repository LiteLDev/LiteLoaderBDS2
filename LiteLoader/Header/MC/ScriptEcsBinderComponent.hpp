// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptEcsBinderComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptEcsBinderComponent {
#include "Extra/ScriptEcsBinderComponentAPI.hpp"
public:
    virtual ~ScriptEcsBinderComponent();
    virtual bool serialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);
    virtual bool deserialize(class ScriptEngine&, class ScriptApi::ScriptObjectHandle const&);

public:
    MCAPI ScriptEcsBinderComponent();
    MCAPI ScriptEcsBinderComponent(enum entt::entity);
    MCAPI ScriptEcsBinderComponent(class entt::basic_registry<enum entt::entity>&, class ItemActor const&);
    MCAPI enum entt::entity getIdentifier() const;

    MCAPI static std::string const TAG;
};