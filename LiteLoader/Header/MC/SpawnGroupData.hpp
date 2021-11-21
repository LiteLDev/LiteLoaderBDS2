// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnGroupDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnGroupData {
#include "Extra/SpawnGroupDataAPI.hpp"

public:
    MCAPI SpawnGroupData(std::string const&, class MobSpawnRules&);
    MCAPI void addSpawnRules(class MobSpawnRules&);
    MCAPI std::string const& getIdentifier() const;
    MCAPI std::vector<class MobSpawnRules> const& getSpawnRules() const;
};