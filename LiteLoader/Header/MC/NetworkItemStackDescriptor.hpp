// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NetworkItemStackDescriptorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetworkItemStackDescriptor {
#include "Extra/NetworkItemStackDescriptorAPI.hpp"

public:
    MCAPI void read(class ReadOnlyBinaryStream&);
    MCAPI void setIncludeNetIds(bool) const;
    MCAPI class TypedServerNetId<struct ItemStackNetIdTag, int, 0> const* tryGetServerNetId() const;
    MCAPI void write(class BinaryStream&) const;
};