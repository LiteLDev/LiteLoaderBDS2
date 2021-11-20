// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FixedBiomeSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FixedBiomeSource {
#include "Extra/FixedBiomeSourceAPI.hpp"
public:
    virtual ~FixedBiomeSource();
    virtual void fillBiomes(class LevelChunk&, class ChunkLocalNoiseCache const&);
    virtual class BiomeArea getBiomeArea(class BoundingBox const&, unsigned int);
    virtual bool containsOnly(int, int, int, int, class gsl::span<int const, -1>);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
};