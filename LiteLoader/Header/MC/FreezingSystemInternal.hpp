// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FreezingSystemInternalAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace FreezingSystemInternal {
#include "Extra/FreezingSystemInternalAPI.hpp"

MCAPI void processFreezeEffect(class Actor&, class FreezingComponent const&);
MCAPI void tickFreezeComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class FreezingComponent>&);

} // namespace FreezingSystemInternal