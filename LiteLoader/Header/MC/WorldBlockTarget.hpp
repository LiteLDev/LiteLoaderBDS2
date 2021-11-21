// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldBlockTargetAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldBlockTarget {
#include "Extra/WorldBlockTargetAPI.hpp"
public:
    virtual ~WorldBlockTarget();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual class Block const& getExtraBlock(class BlockPos const&);
    virtual bool hasBiomeTag(unsigned __int64, class BlockPos const&);
    virtual bool setBlock(class BlockPos const&, class Block const&, int);
    virtual bool setBlockSimple(class BlockPos const&, class Block const&);
    virtual void unk_vfn_7();
    virtual bool placeStructure(class BlockPos const&, class StructureTemplate&, class StructureSettings&);
    virtual bool mayPlace(class BlockPos const&, class Block const&);
    virtual bool canSurvive(class BlockPos const&, class Block const&);
    virtual short getMaxHeight();
    virtual void unk_vfn_12();
    virtual bool shimPlaceForOldFeatures(class Feature const&, class BlockPos const&, class Random&);
    virtual short getHeightmap(int, int);
    virtual bool isLegacyLevel();
    virtual class Biome const* getBiome(class BlockPos const&);
    virtual bool isInBounds(class Pos const&);
    virtual short getLocalWaterLevel(class BlockPos const&);
    virtual class LevelData const& getLevelData();
    virtual void unk_vfn_20();

public:
    MCAPI WorldBlockTarget(class BlockSource&);
};