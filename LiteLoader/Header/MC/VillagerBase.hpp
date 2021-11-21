// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VillagerBaseAPI.hpp"
#undef EXTRA_INCLUDE_PART
class VillagerBase : public Mob {
#include "Extra/VillagerBaseAPI.hpp"
public:
    virtual void reloadComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual ~VillagerBase();
    virtual bool isRuntimePredictedMovementEnabled();
    virtual void unk_vfn_22();
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void unk_vfn_41();
    virtual float getRidingHeight();
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual float getCameraOffset();
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual void unk_vfn_94();
    virtual void unk_vfn_97();
    virtual bool isDamageBlocked(class ActorDamageSource const&);
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*);
    virtual void adjustDamageAmount(int&);
    virtual void onTame();
    virtual void onFailedTame();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual void onLightningHit();
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    virtual void unk_vfn_144();
    virtual void awardKillScore(class Actor&, int);
    virtual int /*enum ActorType*/ getEntityTypeId();
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual int getPortalWaitTime();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual struct ActorUniqueID getControllingPlayer();
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual void unk_vfn_197();
    virtual bool canSynchronizeNewEntity();
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual bool isWorldBuilder();
    virtual void unk_vfn_229();
    virtual bool isAdventure();
    virtual bool canDestroyBlock(class Block const&);
    virtual void setAuxValue(int);
    virtual void stopSpinAttack();
    virtual void unk_vfn_243();
    virtual void unk_vfn_246();
    virtual void unk_vfn_258();
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    virtual void addAdditionalSaveData(class CompoundTag&);
    virtual void unk_vfn_266();
    virtual void _onSizeUpdated();
    virtual void unk_vfn_275();
    virtual void spawnAnim();
    virtual int getItemUseDuration();
    virtual float getItemUseStartupProgress();
    virtual float getItemUseIntervalProgress();
    virtual void unk_vfn_305();
    virtual bool isAlliedTo(class Mob*);
    virtual void unk_vfn_309();
    virtual void sendArmorDamage(class std::bitset<4> const&);
    virtual void onBorn(class Actor&, class Actor&);
    virtual void unk_vfn_338();
    virtual float _getWalkTargetValue(class BlockPos const&);
    virtual void unk_vfn_341();
    virtual void _serverAiMobStep();
    virtual void unk_vfn_357();

public:
    MCAPI VillagerBase(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);
    MCAPI void consumeLoveFood();
    MCAPI int getBreedingStackIndex() const;
    MCAPI bool isChasing() const;
    MCAPI bool isWillingToBreed(bool);
    MCAPI void setChasing(bool);
    MCAPI void setWillingToBreed(bool);
    MCAPI void stopGoals();


private:
    MCAPI void _addParticlesAroundSelf(enum ParticleType);
};