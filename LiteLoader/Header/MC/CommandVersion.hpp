// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandVersionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandVersion {
#include "Extra/CommandVersionAPI.hpp"

public:
    MCAPI bool covers(class CommandVersion const&) const;
    MCAPI bool isCompatible(int) const;

    MCAPI static int const CurrentVersion;
    MCAPI static enum CurrentCmdVersion const getVersionMapping(class SemVersion const&);
};