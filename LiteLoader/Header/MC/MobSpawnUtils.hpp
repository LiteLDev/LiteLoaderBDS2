// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MobSpawnUtilsAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace MobSpawnUtils {
#include "Extra/MobSpawnUtilsAPI.hpp"

MCAPI class Mob* trySpawnMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class BlockPos, int, int, int, class std::function<bool(class BlockPos)> const&);

} // namespace MobSpawnUtils