// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CoralHangFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CoralHangFeature : public Feature {
#include "Extra/CoralHangFeatureAPI.hpp"
public:
    virtual ~CoralHangFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);
};