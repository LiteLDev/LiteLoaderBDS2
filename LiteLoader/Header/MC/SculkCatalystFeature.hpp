// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SculkCatalystFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SculkCatalystFeature {
#include "Extra/SculkCatalystFeatureAPI.hpp"
public:
    virtual ~SculkCatalystFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();
};