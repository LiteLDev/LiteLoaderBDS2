// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LookAtComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LookAtComponent {
#include "Extra/LookAtComponentAPI.hpp"

public:
    MCAPI int& getCoolingTime();
    MCAPI float getSearchRadius() const;
    MCAPI bool getTarget() const;
    MCAPI void initFromDefinition(class Actor&, class LookAtDefinition const&);
    MCAPI bool isLookingAtMe(class Actor&, class Actor&);
};