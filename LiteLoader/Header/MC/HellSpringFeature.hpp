// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HellSpringFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HellSpringFeature : public Feature {
#include "Extra/HellSpringFeatureAPI.hpp"
public:
    virtual ~HellSpringFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};