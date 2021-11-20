// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VehicleUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace VehicleUtils {
#include "Extra/VehicleUtilsAPI.hpp"

public:
MCAPI static class std::optional<float> calculateBlockFloorHeight(class BlockSource&, class BlockPos const&);
MCAPI static struct VehicleUtils::VehicleDirections calculateVehicleDirections(class Vec3 const&, class Vec3 const&);
MCAPI static bool ignoredExitCollisionBlock(class Block const&);
MCAPI static class std::optional<class Vec3> testPosFollowingEjectPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);
MCAPI static class std::optional<class Vec3> testPosFollowingLegacyActivatorRailPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);
MCAPI static class std::optional<class Vec3> testPosFollowingLegacyActorPattern(struct VehicleUtils::VehicleDirections const&, class std::function<bool(class Vec3 const&, class Vec3 const&)>);

} // namespace VehicleUtils