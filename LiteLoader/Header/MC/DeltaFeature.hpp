// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DeltaFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DeltaFeature : public Feature {
#include "Extra/DeltaFeatureAPI.hpp"
public:
    virtual ~DeltaFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);


private:
    MCAPI class std::optional<class BlockPos> _findDeltaLevel(class BlockSource&, class BlockPos) const;
    MCAPI bool _isValidPlacement(class BlockSource&, class BlockPos) const;
};