// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ClockSpriteCalculatorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ClockSpriteCalculator {
#include "Extra/ClockSpriteCalculatorAPI.hpp"

public:
    MCAPI int update(class Actor&, bool);
    MCAPI int update(class BlockSource const&, class Vec3 const&, bool);
};