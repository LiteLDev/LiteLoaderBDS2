// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnPointCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnPointCommand {
#include "Extra/SpawnPointCommandAPI.hpp"
public:
    virtual ~SpawnPointCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);
};