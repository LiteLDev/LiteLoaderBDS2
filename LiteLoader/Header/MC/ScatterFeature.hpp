// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScatterFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScatterFeature {
#include "Extra/ScatterFeatureAPI.hpp"
public:
    virtual ~ScatterFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

public:
    MCAPI ScatterFeature();
};