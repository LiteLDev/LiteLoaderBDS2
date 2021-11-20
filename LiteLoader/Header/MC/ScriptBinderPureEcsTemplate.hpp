// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBinderPureEcsTemplateAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBinderPureEcsTemplate {
#include "Extra/ScriptBinderPureEcsTemplateAPI.hpp"
public:
    virtual ~ScriptBinderPureEcsTemplate();
    virtual std::string const& getTemplateIdentifier();
    virtual void applyTemplate(class ScriptObjectBinder&);

public:
    MCAPI static std::unique_ptr<class ScriptObjectBinder> build(class entt::basic_registry<enum entt::entity>&, enum entt::entity);
};