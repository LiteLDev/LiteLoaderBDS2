// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ImitateMobSoundsComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace ImitateMobSoundsComponent {
#include "Extra/ImitateMobSoundsComponentAPI.hpp"

public:
MCAPI static enum LevelSoundEvent getRandomImitatedSound(class Randomize const&);
MCAPI static bool imitateNearbyMobs(class Actor&, class Randomize const&);


} // namespace ImitateMobSoundsComponent