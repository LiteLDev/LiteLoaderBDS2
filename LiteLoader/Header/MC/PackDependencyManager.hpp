// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PackDependencyManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace PackDependencyManager {
#include "Extra/PackDependencyManagerAPI.hpp"

MCAPI std::vector<struct PackIdVersion> getMissingDependencyIdentities(class gsl::not_null<class PackSource const*>, class PackManifest const&);
MCAPI bool isNativeModule(std::string const&);


} // namespace PackDependencyManager