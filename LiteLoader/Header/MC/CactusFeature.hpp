// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CactusFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CactusFeature : public Feature {
#include "Extra/CactusFeatureAPI.hpp"
public:
    virtual ~CactusFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};