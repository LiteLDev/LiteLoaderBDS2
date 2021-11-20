// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorDefinitionDescriptorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorDefinitionDescriptor {
#include "Extra/ActorDefinitionDescriptorAPI.hpp"

public:
    MCAPI class ActorDefinitionDescriptor& combine(class ActorDefinitionDescriptor const&);
    MCAPI bool contains(class ActorDefinitionDescriptor const&) const;
    MCAPI bool executeEvent(class Actor&, std::string const&, class VariantParameterList const&);
    MCAPI bool executeTrigger(class Actor&, class DefinitionTrigger const&, class VariantParameterList const&);
    MCAPI void forceExecuteTrigger(class Actor&, class DefinitionTrigger const&, class VariantParameterList const&);
    MCAPI bool hasJumpSubComponent();
    MCAPI bool hasMovementSubComponent();
    MCAPI bool hasNavigationSubComponent();
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor const&);
    MCAPI class ActorDefinitionDescriptor& operator=(class ActorDefinitionDescriptor&&);
    MCAPI bool overlaps(class ActorDefinitionDescriptor const&) const;
    MCAPI class ActorDefinitionDescriptor& subtract(class ActorDefinitionDescriptor const&);
};