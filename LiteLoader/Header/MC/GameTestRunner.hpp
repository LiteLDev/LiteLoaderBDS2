// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GameTestRunnerAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace GameTestRunner {
#include "Extra/GameTestRunnerAPI.hpp"

public:
MCAPI static void clearMarkers(class Level&);
MCAPI static void runTest(class std::shared_ptr<class gametest::BaseGameTestInstance>, class gametest::GameTestTicker&);

} // namespace GameTestRunner