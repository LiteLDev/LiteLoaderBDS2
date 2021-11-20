// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CaveFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CaveFeature {
#include "Extra/CaveFeatureAPI.hpp"
public:
    virtual ~CaveFeature();
    virtual void unk_vfn_1();
    virtual bool isValidPlacement(std::string const&);
    virtual void addRoom(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&);
    virtual void addTunnel(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, float, int, int, float, class RenderParams&, struct CaveFeatureUtils::CarvingParameters const&);
    virtual bool carveEllipsoidVolume(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, class BoundingBox const&, float, float, struct CaveFeatureUtils::CarvingParameters const&);
    virtual void addFeature(class IBlockWorldGenAPI&, class ChunkPos, class Random&, class ChunkPos, class RenderParams&);

public:
    MCAPI float getWidthModifier(class RenderParams&) const;

protected:
    MCAPI bool carveBlock(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class BlockPos, bool*, bool, class Vec3 const&, int, class BlockPos) const;
    MCAPI bool carveEllipsoid(class IBlockWorldGenAPI&, struct CaveFeatureUtils::CarverConfiguration const&, class Random&, class ChunkPos const&, class Vec3 const&, float, float, struct CaveFeatureUtils::CarvingParameters const&) const;

    MCAPI static bool shouldSkipCarving(float, float, float, float, float);
};