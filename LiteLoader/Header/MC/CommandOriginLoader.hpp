// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandOriginLoaderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandOriginLoader {
#include "Extra/CommandOriginLoaderAPI.hpp"
public:
    virtual ~CommandOriginLoader();
    virtual std::unique_ptr<class CommandOrigin> load(class CompoundTag const&);

public:
    MCAPI static std::unique_ptr<class CommandOrigin> load(class CompoundTag const&, class ServerLevel&);
};