// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PostprocessingManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PostprocessingManager {
#include "Extra/PostprocessingManagerAPI.hpp"

public:
    MCAPI class std::optional<std::vector<struct PostprocessingManager::LockedChunk>> tryLock(class ChunkPos const&, class ChunkSource&);
};