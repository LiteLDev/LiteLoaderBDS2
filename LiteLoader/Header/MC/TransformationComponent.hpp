// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TransformationComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TransformationComponent {
#include "Extra/TransformationComponentAPI.hpp"

public:
    MCAPI TransformationComponent();
    MCAPI int getDelayTicks() const;
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void maintainOldData(class Actor&, class Actor&, struct TransformationDescription const&, struct ActorUniqueID const&, class Level const&);
    MCAPI void reloadComponent(class Actor&);
    MCAPI void setDelayTicks(int);
    MCAPI void transformIfAble(class Actor&);
};