// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BiomeIdCompatibilityAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace BiomeIdCompatibility {
#include "Extra/BiomeIdCompatibilityAPI.hpp"

MCAPI unsigned int const MAX_CUSTOM_BIOMES;
MCAPI unsigned int adjustForReservedRanges(unsigned int, std::string const&);
MCAPI bool isReserved(unsigned int);

} // namespace BiomeIdCompatibility