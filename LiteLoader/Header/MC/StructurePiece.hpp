// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/StructurePieceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StructurePiece {
#include "Extra/StructurePieceAPI.hpp"
public:
    virtual ~StructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void unk_vfn_2();
    virtual int /*enum StructurePieceType*/ getType();
    virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    virtual bool postProcess(class BlockSource&, class Random&, class BoundingBox const&);
    virtual void postProcessMobsAt(class BlockSource&, class Random&, class BoundingBox const&);
    virtual int getWorldX(int, int);
    virtual int getWorldZ(int, int);
    virtual void placeBlock(class BlockSource&, class Block const&, int, int, int, class BoundingBox const&);
    virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    virtual void generateBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, class Block const&, class Block const&, bool);
    virtual int getWorldZ(int, int);

public:
    MCAPI class BlockPos _getWorldPos(int, int, int);
    MCAPI bool edgesLiquid(class BlockSource&, class BoundingBox const&);
    MCAPI void generateAirBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int);
    MCAPI void generateBox(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, bool, class Random&, class BlockSelector const&);
    MCAPI void generateMaybeBox(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, int, int, int, class Block const&, class Block const&, bool, bool);
    MCAPI void generateUpperHalfSphere(class BlockSource&, class BoundingBox const&, int, int, int, int, int, int, class Block const&, bool);
    MCAPI class Block const& getBlock(class BlockSource&, int, int, int, class BoundingBox const&);
    MCAPI unsigned short getOrientationData(class Block const*, unsigned short);
    MCAPI int getWorldY(int);
    MCAPI bool isAboveGround(int, int, int, class BlockSource&);
    MCAPI bool isAir(class BlockSource&, int, int, int, class BoundingBox const&);
    MCAPI bool isReplaceableBlock(class Block const&);
    MCAPI void maybeGenerateBlock(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);
    MCAPI void maybeGenerateBlockIfNotFloating(class BlockSource&, class BoundingBox const&, class Random&, float, int, int, int, class Block const&);

    MCAPI static int getTotalWeight(std::vector<class PieceWeight> const&);
};