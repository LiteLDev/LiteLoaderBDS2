// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WaterlilyFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WaterlilyFeature : public Feature {
#include "Extra/WaterlilyFeatureAPI.hpp"
public:
    virtual ~WaterlilyFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};