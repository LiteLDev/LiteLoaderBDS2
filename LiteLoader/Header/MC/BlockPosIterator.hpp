// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockPosIteratorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockPosIterator {
#include "Extra/BlockPosIteratorAPI.hpp"

public:
    MCAPI class BlockPosIterator begin() const;
    MCAPI class BlockPosIterator& operator++();
    MCAPI bool operator!=(class BlockPosIterator const&);
    MCAPI BlockPosIterator(class BlockPos const&, class BlockPos const&);
    MCAPI class BlockPosIterator end() const;
    MCAPI class BlockPos const& operator*();
};