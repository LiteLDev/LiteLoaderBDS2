// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PositionalRandomFactoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PositionalRandomFactory {
#include "Extra/PositionalRandomFactoryAPI.hpp"

public:
    MCAPI class SimpleRandom forBlockPos(class BlockPos const&) const;
};