// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DwellerComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DwellerComponent {
#include "Extra/DwellerComponentAPI.hpp"

public:
    MCAPI void DecrementDwellingUpdateInterval();
    MCAPI void addAdditionalSaveData(class CompoundTag&, class Actor&);
    MCAPI void checkandUpdateDwellingStatus(class Actor const&, class Village*);
    MCAPI void clearPreferredProfession();
    MCAPI void fixupProfession(class Actor const&, class Village*);
    MCAPI bool getCanFindPOI() const;
    MCAPI enum DwellerRole getDwellerRole() const;
    MCAPI class mce::UUID getDwellingUniqueID() const;
    MCAPI unsigned __int64 getDwellingUpdateInterval() const;
    MCAPI bool getFixUpRole() const;
    MCAPI int getUpdateIntervalVariant() const;
    MCAPI class DwellerComponent& operator=(class DwellerComponent&&);
    MCAPI class HashedString const& getPreferredProfession() const;
    MCAPI unsigned __int64 getUpdateIntervalBase() const;
    MCAPI class std::weak_ptr<class Village> const getVillage(class Actor const&) const;
    MCAPI class BlockPos getVillageCenter(class Actor const&) const;
    MCAPI bool hasDwelling() const;
    MCAPI bool hasPreferredProfession(class Actor const&) const;
    MCAPI void initFromDefinition(class Actor&);
    MCAPI bool isWithinRestriction(class Actor const&) const;
    MCAPI bool needsToFixupProfession(class Actor const&) const;
    MCAPI bool needsToFixupVillageRole(class Actor const&, class Village*) const;
    MCAPI void onDeath(class Actor&, class ActorDamageSource const&);
    MCAPI void onDimensionChange(class Actor&);
    MCAPI void onRemove(class Actor&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void setDwellingUniqueID(class Actor&, class mce::UUID);
    MCAPI void setDwellingUpdateInterval(unsigned __int64);
    MCAPI void setFixUpRole(bool);
    MCAPI void setLastHurtByMob(class Actor&, class Mob*);
    MCAPI bool trySetPreferredProfession(class Actor const&, class HashedString const&);
    MCAPI bool tryToFixupRole(class Actor const&, class Village*);
    MCAPI bool tryToMigrate(class Actor&, class Village*, class Village*);
    MCAPI bool wantsToMigrate(class Actor const&, class Village*) const;

private:
    MCAPI bool _isLockedInToProfession(class Actor const&) const;
};