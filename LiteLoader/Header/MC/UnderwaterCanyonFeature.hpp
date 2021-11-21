// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UnderwaterCanyonFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UnderwaterCanyonFeature : public CanyonFeature {
#include "Extra/UnderwaterCanyonFeatureAPI.hpp"
public:
    virtual ~UnderwaterCanyonFeature();
    virtual bool carve(class BlockVolume&, class BiomeSource const&, class Random&, class ChunkPos const&, class Vec3 const&, class Vec3 const&, int, int, int, int, int, int, float, float, class gsl::span<float const, -1>, struct WorldGenContext const&);

public:
    MCAPI UnderwaterCanyonFeature(short);
};