// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/IncomingDataHelpersAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace IncomingDataHelpers {
#include "Extra/IncomingDataHelpersAPI.hpp"

MCAPI void clearIncomingCachedData(unsigned __int64);
MCAPI class std::recursive_mutex mDataMutex;
MCAPI class std::unordered_map<unsigned __int64, bool, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, bool>>> mIsDataReady;

} // namespace IncomingDataHelpers