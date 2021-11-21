// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ServerPlayerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ServerPlayer : public Player {
#include "Extra/ServerPlayerAPI.hpp"
public:
    virtual void initializeComponents(int /*enum Actor::InitializationMethod*/, class VariantParameterList const&);
    virtual void _serverInitItemStackIds();
    virtual ~ServerPlayer();
    virtual bool isRuntimePredictedMovementEnabled();
    virtual void unk_vfn_22();
    virtual class Vec3 getInterpolatedRidingOffset(float);
    virtual void unk_vfn_41();
    virtual void normalTick();
    virtual void unk_vfn_61();
    virtual void unk_vfn_68();
    virtual void unk_vfn_82();
    virtual void unk_vfn_87();
    virtual void playerTouch(class Player&);
    virtual void unk_vfn_94();
    virtual void unk_vfn_97();
    virtual void unk_vfn_103();
    virtual void unk_vfn_104();
    virtual void unk_vfn_106();
    virtual void unk_vfn_107();
    virtual void unk_vfn_108();
    virtual class Actor* findAttackTarget();
    virtual bool isValidTarget(class Actor*);
    virtual void onTame();
    virtual void onFailedTame();
    virtual void unk_vfn_130();
    virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    virtual void handleEntityEvent(int /*enum ActorEvent*/, int);
    virtual void unk_vfn_144();
    virtual void setArmor(int /*enum ArmorSlot*/, class ItemStack const&);
    virtual class ItemStack const& getCarriedItem();
    virtual void setOffhandSlot(class ItemStack const&);
    virtual bool load(class CompoundTag const&, class DataLoadHelper&);
    virtual class HashedString const& queryEntityRenderer();
    virtual struct ActorUniqueID getSourceUniqueID();
    virtual int getPortalCooldown();
    virtual bool canChangeDimensions();
    virtual void unk_vfn_184();
    virtual void changeDimension(class AutomaticID<class Dimension, int>, bool);
    virtual struct ActorUniqueID getControllingPlayer();
    virtual void checkFallDamage(float, bool);
    virtual void handleFallDistanceOnServer(float, float, bool);
    virtual bool canPickupItem(class ItemStack const&);
    virtual bool canBePulledIntoVehicle();
    virtual void unk_vfn_197();
    virtual void sendMotionPacketIfNeeded();
    virtual bool canSynchronizeNewEntity();
    virtual void onEffectAdded(class MobEffectInstance&);
    virtual void onEffectUpdated(class MobEffectInstance&);
    virtual void onEffectRemoved(class MobEffectInstance&);
    virtual void unk_vfn_222();
    virtual void unk_vfn_223();
    virtual void unk_vfn_229();
    virtual bool canDestroyBlock(class Block const&);
    virtual void setAuxValue(int);
    virtual void unk_vfn_243();
    virtual void unk_vfn_246();
    virtual void die(class ActorDamageSource const&);
    virtual void unk_vfn_258();
    virtual void unk_vfn_266();
    virtual void unk_vfn_275();
    virtual void knockback(class Actor*, int, float, float, float, float, float);
    virtual void spawnAnim();
    virtual void aiStep();
    virtual void unk_vfn_305();
    virtual bool isAlliedTo(class Mob*);
    virtual void unk_vfn_309();
    virtual void hurtArmorSlots(class ActorDamageSource const&, int, class std::bitset<4> const&);
    virtual void setDamagedArmor(int /*enum ArmorSlot*/, class ItemStack const&);
    virtual void sendArmorDamage(class std::bitset<4> const&);
    virtual void sendArmor(class std::bitset<4> const&);
    virtual void clearVanishEnchantedItemsOnDeath();
    virtual void sendInventory(bool);
    virtual void onBorn(class Actor&, class Actor&);
    virtual void unk_vfn_338();
    virtual float _getWalkTargetValue(class BlockPos const&);
    virtual bool canExistWhenDisallowMob();
    virtual void unk_vfn_341();
    virtual void updateAi();
    virtual void _serverAiMobStep();
    virtual void unk_vfn_357();
    virtual void prepareRegion(class ChunkSource&);
    virtual void destroyRegion();
    virtual void suspendRegion();
    virtual void resendAllChunks();
    virtual void changeDimensionWithCredits(class AutomaticID<class Dimension, int>);
    virtual void tickWorld(struct Tick const&);
    virtual void unk_vfn_366();
    virtual void checkMovementStats(class Vec3 const&);
    virtual void unk_vfn_371();
    virtual void unk_vfn_372();
    virtual void unk_vfn_374();
    virtual void unk_vfn_376();
    virtual void setPermissions(int /*enum CommandPermissionLevel*/);
    virtual void unk_vfn_382();
    virtual void unk_vfn_383();
    virtual void openTrading(struct ActorUniqueID const&, bool);
    virtual void unk_vfn_386();
    virtual void unk_vfn_387();
    virtual void openInventory();
    virtual void unk_vfn_389();
    virtual void unk_vfn_390();
    virtual void displayTextObjectMessage(class TextObjectRoot const&, std::string const&, std::string const&);
    virtual void displayTextObjectWhisperMessage(class ResolvedTextObject const&, std::string const&, std::string const&);
    virtual void displayWhisperMessage(std::string const&, std::string const&, std::string const&, std::string const&);
    virtual void stopSleepInBed(bool, bool);
    virtual void unk_vfn_399();
    virtual void unk_vfn_400();
    virtual bool isHostingPlayer();
    virtual bool isLoading();
    virtual bool isPlayerInitialized();
    virtual void unk_vfn_404();
    virtual void setPlayerGameType(int /*enum GameType*/);
    virtual void unk_vfn_411();
    virtual void setContainerData(class IContainerManager&, int, int);
    virtual void slotChanged(class IContainerManager&, class Container&, int, class ItemStack const&, class ItemStack const&, bool);
    virtual void refreshContainer(class IContainerManager&);
    virtual bool is2DPositionRelevant(class AutomaticID<class Dimension, int>, class BlockPos const&);
    virtual bool isActorRelevant(class Actor const&);
    virtual bool isTeacher();
    virtual void onSuspension();
    virtual void onLinkedSlotsChanged();
    virtual void sendInventoryTransaction(class InventoryTransaction const&);
    virtual void sendComplexInventoryTransaction(std::unique_ptr<class ComplexInventoryTransaction>);
    virtual void sendNetworkPacket(class Packet&);
    virtual class PlayerEventCoordinator& getPlayerEventCoordinator();
    virtual class MoveInputHandler* getMoveInputHandler();
    virtual int /*enum InputMode*/ getInputMode();
    virtual int /*enum ClientPlayMode*/ getPlayMode();
    virtual void reportMovementTelemetry(int /*enum MovementEventType*/);
    virtual void unk_vfn_439();
    virtual int _getSpawnChunkLimit();
    virtual void _updateChunkPublisherView(class Vec3 const&, float);

public:
    MCAPI void checkCheating(class Vec3 const&);
    MCAPI void disconnect();
    MCAPI void doDeleteContainerManager(bool);
    MCAPI class ItemStackNetManagerServer& getItemStackNetManagerServer();
    MCAPI class ServerMoveInputHandler* getServerMoveInputHandler();
    MCAPI void handleActorPickRequestOnServer(class Actor&, bool, bool);
    MCAPI void handleBlockPickRequestOnServer(class BlockPos const&, bool);
    MCAPI enum ContainerID openUnmanagedContainer();
    MCAPI void postLoad(bool);
    MCAPI void selectItem(class ItemStack const&);
    MCAPI void sendMobEffectPackets();
    MCAPI void setClientChunkRadius(unsigned int);
    MCAPI void setInputMode(enum InputMode const&);
    MCAPI void setLocalPlayerAsInitialized();
    MCAPI void setPlayMode(enum ClientPlayMode const&);
    MCAPI void setPlayerInput(float, float, bool, bool);
    MCAPI void setSyncTimeIfClientServerPositionMatches(class Vec3 const&);
    MCAPI void triggerRespawnFromCompletingTheEnd();

    MCAPI static class ServerPlayer* tryGetFromEntity(class EntityContext&, bool);

private:
    MCAPI void _logCDEvent(enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID, enum CrashDumpLogStringID);
    MCAPI enum ContainerID _nextContainerCounter();
    MCAPI void _removeNearbyEntities();
    MCAPI void _scanForNearbyActors();
    MCAPI void _setContainerManager(class std::shared_ptr<class IContainerManager>);
    MCAPI void _updateNearbyActors();
};