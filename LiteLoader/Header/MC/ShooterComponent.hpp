// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ShooterComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShooterComponent {
#include "Extra/ShooterComponentAPI.hpp"

public:
    MCAPI int getAuxValue();
    MCAPI void initFromDefinition(class Actor&, class ShooterDefinition const&);
    MCAPI void onShoot(class Actor&);
};