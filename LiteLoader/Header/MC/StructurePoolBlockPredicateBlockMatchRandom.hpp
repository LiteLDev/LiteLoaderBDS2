// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/StructurePoolBlockPredicateBlockMatchRandomAPI.hpp"
#undef EXTRA_INCLUDE_PART
class StructurePoolBlockPredicateBlockMatchRandom {
#include "Extra/StructurePoolBlockPredicateBlockMatchRandomAPI.hpp"
public:
    virtual ~StructurePoolBlockPredicateBlockMatchRandom();
    virtual void unk_vfn_1();
    virtual bool test(class Block const&, class Randomize&);

public:
    MCAPI StructurePoolBlockPredicateBlockMatchRandom(class Block const&, float);
};