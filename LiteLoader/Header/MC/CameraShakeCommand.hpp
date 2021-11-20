// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CameraShakeCommandAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CameraShakeCommand {
#include "Extra/CameraShakeCommandAPI.hpp"
public:
    virtual ~CameraShakeCommand();
    virtual void execute(class CommandOrigin const&, class CommandOutput&);

public:
    MCAPI static void setup(class CommandRegistry&);

private:
    MCAPI void _executeAdd(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI void _executeStop(class CommandOrigin const&, class CommandOutput&) const;
};