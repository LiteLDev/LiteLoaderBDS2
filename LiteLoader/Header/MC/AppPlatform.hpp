// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AppPlatformAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AppPlatform {
#include "Extra/AppPlatformAPI.hpp"

public:
    MCAPI AppPlatform(bool);
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo>& accessPlatformRuntimeInformation_Shim();
    MCAPI void addListener(class AppPlatformListener*, float);
    MCAPI std::unique_ptr<struct Bedrock::PlatformRuntimeInfo> const& getPlatformRuntimeInformation() const;
    MCAPI class Core::PathBuffer<std::string> getScratchPath();
    MCAPI void initialize();
    MCAPI bool isEduMode() const;
    MCAPI bool isTerminating() const;
    MCAPI void removeListener(class AppPlatformListener*);
    MCAPI void teardown();

    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const HOME_PATH;
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const LOG_PATH;
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SETTINGS_PATH;

private:
    MCAPI void _initializeLoadProfiler();

    MCAPI static bool mIsInitialized;

protected:
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> const SHADERCACHE_PATH;
};