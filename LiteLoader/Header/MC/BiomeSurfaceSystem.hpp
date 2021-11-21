// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BiomeSurfaceSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BiomeSurfaceSystem {
#include "Extra/BiomeSurfaceSystemAPI.hpp"

MCAPI void buildSurfaceAt(struct ISurfaceBuilder::BuildParameters const&);
MCAPI void resolveBuilderImplementation(class EntityRegistry&, class SurfaceBuilderRegistry const&, unsigned int);


} // namespace BiomeSurfaceSystem