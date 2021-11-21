// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/OreFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OreFeature {
#include "Extra/OreFeatureAPI.hpp"
public:
    virtual ~OreFeature();
    virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&);
    virtual void unk_vfn_2();

public:
    MCAPI OreFeature();
    MCAPI OreFeature(int, std::vector<struct ReplaceRule>&&);


private:
    MCAPI class std::optional<class BlockPos> _legacyPlace(class IBlockWorldGenAPI&, class BlockPos const&, class Random&) const;
    MCAPI class std::optional<class BlockPos> _place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&) const;
};