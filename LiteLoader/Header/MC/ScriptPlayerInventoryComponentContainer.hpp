// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptPlayerInventoryComponentContainerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptPlayerInventoryComponentContainer : public ScriptInventoryComponentContainer {
#include "Extra/ScriptPlayerInventoryComponentContainerAPI.hpp"
public:
    virtual ~ScriptPlayerInventoryComponentContainer();
    virtual class Container* _tryGetContainer();
    virtual void _balanceTransaction(class ItemStack const&);

public:
    MCAPI ScriptPlayerInventoryComponentContainer(class WeakEntityRef const&, class Scripting::WeakLifetimeScope const&);

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptPlayerInventoryComponentContainer> bind(struct Scripting::Version);
};