// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PodzolAreaFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PodzolAreaFeature : public Feature {
#include "Extra/PodzolAreaFeatureAPI.hpp"
public:
    virtual ~PodzolAreaFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};