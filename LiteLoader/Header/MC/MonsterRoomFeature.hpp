// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MonsterRoomFeatureAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MonsterRoomFeature : public Feature {
#include "Extra/MonsterRoomFeatureAPI.hpp"
public:
    virtual ~MonsterRoomFeature();
    virtual void unk_vfn_2();
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&);

public:
    MCAPI MonsterRoomFeature();
};