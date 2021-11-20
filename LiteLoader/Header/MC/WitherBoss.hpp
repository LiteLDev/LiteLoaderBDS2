// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WitherBossAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WitherBoss : public Monster {
#include "Extra/WitherBossAPI.hpp"
public:
    virtual void reloadHardcoded(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void reloadHardcodedClient(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual ~WitherBoss();
    virtual void remove();
    virtual bool isRuntimePredictedMovementEnabled();
    virtual void unk_vfn_22();
    virtual class Vec3 getFiringPos();
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void unk_vfn_41();
    virtual float getRidingHeight();
    virtual bool startRiding(class Actor&);
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual void setBlockMovementSlowdownMultiplier(class Vec3 const&);
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
    virtual bool isValidTarget(class Actor*);
    virtual void adjustDamageAmount(int&);
    virtual void onTame();
    virtual void onFailedTame();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual bool isInvulnerableTo(class ActorDamageSource const&);
    virtual void onBounceStarted(class BlockPos const&, class Block const&);
    virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    virtual void unk_vfn_144();
    virtual void awardKillScore(class Actor&, int);
    virtual int /*enum ActorType*/ getEntityTypeId();
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual bool canFreeze();
    virtual int getPortalWaitTime();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual struct ActorUniqueID getControllingPlayer();
    virtual void causeFallDamage(float, float, class ActorDamageSource);
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual void unk_vfn_197();
    virtual bool canSynchronizeNewEntity();
    virtual bool canBeAffected(class MobEffectInstance const&);
    virtual bool canBeAffectedByArrow(class MobEffectInstance const&);
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
    virtual void die(class ActorDamageSource const&);
    virtual void unk_vfn_258();
    virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    virtual void addAdditionalSaveData(class CompoundTag&);
    virtual void unk_vfn_266();
    virtual void unk_vfn_275();
    virtual void spawnAnim();
    virtual bool hurtEffects(class ActorDamageSource const&, int, bool, bool);
    virtual void aiStep();
    virtual bool checkSpawnRules(bool);
    virtual int getItemUseDuration();
    virtual float getItemUseStartupProgress();
    virtual float getItemUseIntervalProgress();
    virtual void unk_vfn_305();
    virtual bool isAlliedTo(class Mob*);
    virtual void unk_vfn_309();
    virtual int getArmorValue();
    virtual void sendArmorDamage(class std::bitset<4> const&);
    virtual void onBorn(class Actor&, class Actor&);
    virtual void unk_vfn_338();
    virtual void unk_vfn_341();
    virtual void newServerAiStep();
    virtual void _serverAiMobStep();
    virtual void unk_vfn_357();

public:
    MCAPI void awardSpawnWitherAchievement() const;
    MCAPI class Vec3 getHeadPos(int) const;
    MCAPI class Vec2 getHeadRot(int);
    MCAPI int getInvulnerableTicks() const;
    MCAPI float getOverlayAlpha();
    MCAPI float getSwellAmount(float) const;
    MCAPI bool hasAerialAttack() const;
    MCAPI void removeSkeleton();
    MCAPI void setAerialAttack(bool);
    MCAPI void setAlternativeTarget(int, struct ActorUniqueID);
    MCAPI void setInvulnerableTicks(int);
    MCAPI void setIsPathing(bool);
    MCAPI void setShotDelay(int);
    MCAPI void setWantsToMove(bool);
    MCAPI bool wantsToMove();

    MCAPI static class mce::UUID const MAX_HEALTH_CAP_UUID;
    MCAPI static bool canDestroy(class Block const&);

private:
    MCAPI void _destroyBlocks(class Level&, class AABB const&, class BlockSource&, int);
    MCAPI void _performRangedAttack(int, class Actor&);
    MCAPI void _performRangedAttack(int, class Vec3 const&, bool);
    MCAPI bool canShoot();

    MCAPI static int const TIME_BEFORE_MOVING;
};