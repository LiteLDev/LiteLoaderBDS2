// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockPlacementFilterComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockPlacementFilterComponent {
#include "Extra/BlockPlacementFilterComponentAPI.hpp"

public:
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&) const;
    MCAPI bool mayPlace(class BlockSource&, class BlockPos const&, unsigned char) const;
};