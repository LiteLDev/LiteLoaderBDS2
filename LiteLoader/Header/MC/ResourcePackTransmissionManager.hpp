// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ResourcePackTransmissionManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ResourcePackTransmissionManager {
#include "Extra/ResourcePackTransmissionManagerAPI.hpp"

public:
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const&);
    MCAPI void update();
};