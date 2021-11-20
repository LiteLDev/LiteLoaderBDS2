// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorClassTreeAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace ActorClassTree {
#include "Extra/ActorClassTreeAPI.hpp"

public:
MCAPI static enum ActorType getEntityTypeIdLegacy(enum ActorType);
MCAPI static bool hasCategory(enum ActorCategory const&, enum ActorCategory);
MCAPI static bool isHangingEntity(class Actor const&);
MCAPI static bool isInstanceOf(class Actor const&, enum ActorType);
MCAPI static bool isMob(enum ActorType);
MCAPI static bool isMobLegacy(enum ActorType);
MCAPI static bool isOfType(enum ActorType, enum ActorType);
MCAPI static bool isTypeInstanceOf(enum ActorType, enum ActorType);

} // namespace ActorClassTree