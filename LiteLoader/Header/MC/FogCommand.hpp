// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FogCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FogCommand {
#include "Extra/FogCommandAPI.hpp"
public:
    virtual ~FogCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};