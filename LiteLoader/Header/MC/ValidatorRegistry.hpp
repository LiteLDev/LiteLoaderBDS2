// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ValidatorRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ValidatorRegistry {
#include "Extra/ValidatorRegistryAPI.hpp"
public:
    virtual ~ValidatorRegistry();

private:
    MCAPI static class ServiceReference<class ValidatorRegistry> _get();
};