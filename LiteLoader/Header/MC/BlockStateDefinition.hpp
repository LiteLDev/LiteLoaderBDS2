// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockStateDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockStateDefinition {
#include "Extra/BlockStateDefinitionAPI.hpp"

public:
    MCAPI struct BlockStateDefinition& operator=(struct BlockStateDefinition&&);
    MCAPI ~BlockStateDefinition();


private:
    MCAPI void _copy(struct BlockStateDefinition const&);
};