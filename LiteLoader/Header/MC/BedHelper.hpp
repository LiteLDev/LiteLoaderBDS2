// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BedHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BedHelper {
#include "Extra/BedHelperAPI.hpp"

public:
    MCAPI float getBedRotation(int) const;
    MCAPI void setBedPositionOffsets(int, float&, float&, class Vec3&);
};