// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/QueryTargetCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class QueryTargetCommand {
#include "Extra/QueryTargetCommandAPI.hpp"
public:
    virtual ~QueryTargetCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};