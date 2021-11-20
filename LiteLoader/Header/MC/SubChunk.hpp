// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SubChunkAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SubChunk {
#include "Extra/SubChunkAPI.hpp"

public:
    MCAPI void deserialize(class IDataInput&, class BlockPalette const&);
    MCAPI void fetchBlocks(class BlockPos const&, class BlockPos const&, short, class BlockVolume&) const;
    MCAPI struct SubChunkBrightnessStorage::LightPair getLight(unsigned short) const;
    MCAPI void initialize(class Block const*, bool, bool, class SpinLock&, signed char);
    MCAPI bool isUniform(class Block const&) const;
    MCAPI struct SubChunk& operator=(struct SubChunk&&);
    MCAPI void prune(enum SubChunkStorageUnit::PruneType);
    MCAPI void reset(class Block const*, bool, bool);
    MCAPI void serialize(class IDataOutput&, bool) const;
    MCAPI void setBlockLight(unsigned short, unsigned char);
    MCAPI void setFromBlockVolume(class BlockVolume const&, short);
    MCAPI void setSkyLight(unsigned short, unsigned char);

protected:
    MCAPI void _createBlockLightStorage();
    MCAPI void _replaceBlocks(unsigned char, std::unique_ptr<class SubChunkStorage<class Block>>, class std::lock_guard<class SpinLock>&);
    MCAPI void _resetLight(bool, bool);
    MCAPI void _setBlock(unsigned char, unsigned short, class Block const&);
};