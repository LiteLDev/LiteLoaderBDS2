// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LegacyBlendedNoiseAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace LegacyBlendedNoise {
#include "Extra/LegacyBlendedNoiseAPI.hpp"

public:
MCAPI static std::unique_ptr<class LegacyBlendedNoise> make(std::unique_ptr<class IRandom>);

} // namespace LegacyBlendedNoise