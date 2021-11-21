// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnActorParametersAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnActorParameters {
#include "Extra/SpawnActorParametersAPI.hpp"

public:
    MCAPI SpawnActorParameters();
    MCAPI SpawnActorParameters(struct SpawnActorParameters&&);
    MCAPI SpawnActorParameters(struct SpawnActorParameters const&);
    MCAPI void setItem(class ItemDescriptor const&);
    MCAPI void setSpawnEntity(std::string const&);
    MCAPI void setSpawnEvent(std::string const&);
    MCAPI void setSpawnSound(std::string const&);
    MCAPI void setSpawnTimeMax(int const&);
    MCAPI void setSpawnTimeMin(int const&);
    MCAPI bool spawnsItemStack() const;
    MCAPI ~SpawnActorParameters();
};