// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UnknownBlockTypeRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UnknownBlockTypeRegistry {
#include "Extra/UnknownBlockTypeRegistryAPI.hpp"
public:
    virtual ~UnknownBlockTypeRegistry();
    virtual class Block const& getUnknownBlock(class CompoundTag const&);

private:
    MCAPI void _registerBlock(std::string const&, unsigned __int64);
};