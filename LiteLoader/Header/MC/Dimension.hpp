// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DimensionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Dimension {
#include "Extra/DimensionAPI.hpp"

public:
    MCAPI Dimension(class ILevel&, class AutomaticID<class Dimension, int>, class DimensionHeightRange, class Scheduler&, std::string);
    MCAPI void _onNewTickingEntity(class Actor&);
    MCAPI void addWither(struct ActorUniqueID const&);
    MCAPI float distanceToNearestPlayerSqr2D(class Vec3);
    MCAPI class Actor* fetchEntity(struct ActorUniqueID, bool);
    MCAPI class Player* fetchNearestAttackablePlayer(class Actor&, float);
    MCAPI class Player* fetchNearestAttackablePlayer(class BlockPos, float, class Actor*);
    MCAPI class Player* fetchNearestPlayer(class Actor&, float);
    MCAPI class Player* fetchNearestPlayer(float, float, float, float, bool);
    MCAPI class Player* findPlayer(class std::function<bool(class Player const&)>) const;
    MCAPI void flagEntityforChunkMove(class Actor&);
    MCAPI void flushLevelChunkGarbageCollector();
    MCAPI void flushRunTimeLighting();
    MCAPI void forEachPlayer(class std::function<bool(class Player&)>) const;
    MCAPI void forceSaveVillageManager();
    MCAPI class BlockEventDispatcher& getBlockEventDispatcher();
    MCAPI class BlockSource& getBlockSourceDEPRECATEDUSEPLAYERREGIONINSTEAD() const;
    MCAPI class ChunkBuildOrderPolicyBase& getChunkBuildOrderPolicy();
    MCAPI class gsl::not_null<class ChunkLoadActionList*> getChunkLoadActionList();
    MCAPI class ChunkSource& getChunkSource() const;
    MCAPI class CircuitSystem& getCircuitSystem();
    MCAPI class gsl::not_null<class DelayActionList*> getDelayActionList();
    MCAPI class AutomaticID<class Dimension, int> getDimensionId() const;
    MCAPI class FeatureTerrainAdjustments& getFeatureTerrainAdjustments();
    MCAPI short getHeight() const;
    MCAPI class DimensionHeightRange const& getHeightRange() const;
    MCAPI class Level& getLevel() const;
    MCAPI class Level const& getLevelConst() const;
    MCAPI short getMinHeight() const;
    MCAPI float getMoonBrightness() const;
    MCAPI int getMoonPhase() const;
    MCAPI float getPopCap(int, bool) const;
    MCAPI struct Brightness getSkyDarken() const;
    MCAPI float getSunAngle(float) const;
    MCAPI class TickingAreaList& getTickingAreas();
    MCAPI class TickingAreaList const& getTickingAreasConst() const;
    MCAPI float getTimeOfDay(float) const;
    MCAPI std::unique_ptr<class VillageManager> const& getVillageManager() const;
    MCAPI class Weather& getWeather() const;
    MCAPI class WorldGenerator* getWorldGenerator() const;
    MCAPI bool hasCeiling() const;
    MCAPI bool hasSkylight() const;
    MCAPI bool isChunkKnown(class ChunkPos const&) const;
    MCAPI bool isLeaveGameDone();
    MCAPI bool isRedstoneTick();
    MCAPI bool isUltraWarm() const;
    MCAPI void onStaticTickingAreaAdded(std::string const&);
    MCAPI void processTickingAreaRemoves();
    MCAPI void processTickingAreaUpdates();
    MCAPI void registerEntity(struct ActorUniqueID const&, class WeakRefT<struct EntityRefTraits>);
    MCAPI void removeActorByID(struct ActorUniqueID const&);
    MCAPI void removeWither(struct ActorUniqueID const&);
    MCAPI void sendPacketForEntity(class Actor const&, class Packet const&, class Player const*);
    MCAPI void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*);
    MCAPI void sendPacketToClients(class Packet const&, std::vector<struct NetworkIdentifierWithSubId>);
    MCAPI void setCeiling(bool);
    MCAPI void setSkylight(bool);
    MCAPI void setUltraWarm(bool);
    MCAPI void transferEntity(class Vec3 const&, std::unique_ptr<class CompoundTag>, bool);
    MCAPI void transferEntityToUnloadedChunk(class Vec3 const&, std::unique_ptr<class CompoundTag>);
    MCAPI bool tryAssignNewRegionAt(class ChunkPos const&, class Actor&);
    MCAPI void tryGarbageCollectStructures();
    MCAPI class BlockSource* tryGetClosestPublicRegion(class ChunkPos const&) const;
    MCAPI void tryLoadLimboEntities(class ChunkPos const&);
    MCAPI void unregisterEntity(struct ActorUniqueID const&);

    MCAPI static enum LimboEntitiesVersion const CurrentLimboEntitiesVersion;
    MCAPI static unsigned int const LOW_CPU_PACKET_BLOCK_LIMIT;
    MCAPI static float const* const const MOON_BRIGHTNESS_PER_PHASE;
    MCAPI static class std::chrono::duration<__int64, struct std::ratio<1, 1>> const STRUCTURE_PRUNE_INTERVAL;

private:
    MCAPI void _estimateLevelChunkMemory() const;
    MCAPI void _sendBlockEntityUpdatePacket(class NetworkBlockPosition const&);
    MCAPI void _sendBlocksChangedPackets();
    MCAPI void _tickEntityChunkMoves();


protected:
    MCAPI void _completeEntityTransfer(class BlockSource&, class OwnerPtrT<struct EntityRefTraits>, bool);
};