// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BasaltPillarFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BasaltPillarFeature : public Feature {
#include "Extra/BasaltPillarFeatureAPI.hpp"
public:
    virtual ~BasaltPillarFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

private:
    MCAPI bool _growColumn(class BlockSource&, class BlockPos const&, class Random&, float) const;
};