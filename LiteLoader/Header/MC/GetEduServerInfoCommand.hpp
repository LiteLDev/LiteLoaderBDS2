// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GetEduServerInfoCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GetEduServerInfoCommand {
#include "Extra/GetEduServerInfoCommandAPI.hpp"
public:
    virtual ~GetEduServerInfoCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};