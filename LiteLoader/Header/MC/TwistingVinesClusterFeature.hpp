// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TwistingVinesClusterFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TwistingVinesClusterFeature : public Feature {
#include "Extra/TwistingVinesClusterFeatureAPI.hpp"
public:
    virtual ~TwistingVinesClusterFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);


private:
    MCAPI void _placeVineString(class BlockSource&, class Random&, class BlockPos const&, int, int, int) const;
};