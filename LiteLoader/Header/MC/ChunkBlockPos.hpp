// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChunkBlockPosAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChunkBlockPos {
#include "Extra/ChunkBlockPosAPI.hpp"

public:
    MCAPI class Pos toPos() const;

    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);
};