// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BehaviorDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BehaviorData {
#include "Extra/BehaviorDataAPI.hpp"

public:
    MCAPI void copyData(std::string const&, std::string const&, class BehaviorData&);
    MCAPI bool hasDataOfType(std::string const&, enum BehaviorData::DataType) const;
};