// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Spawner {
#include "Extra/SpawnerAPI.hpp"

public:
    MCAPI void postProcessSpawnMobs(class BlockSource&, int, int, class Random&);
    MCAPI class ItemActor* spawnItem(class BlockSource&, class ItemStack const&, class Actor*, class Vec3 const&, int);
    MCAPI class Mob* spawnMob(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, bool, bool, bool);
    MCAPI class Actor* spawnProjectile(class BlockSource&, struct ActorDefinitionIdentifier const&, class Actor*, class Vec3 const&, class Vec3 const&);
    MCAPI void tick(class BlockSource&, class LevelChunk const&);

    MCAPI static bool findNextSpawnBlockUnder(class BlockSource const&, class BlockPos&, enum MaterialType, enum SpawnBlockRequirements);

private:
    MCAPI int _handlePopulationCap(class MobSpawnerData const*, class SpawnConditions const&, int);
    MCAPI void _permuteId(struct ActorDefinitionIdentifier&, class MobSpawnRules const&, class Random&) const;
    MCAPI void _sendHerdEvents(struct MobSpawnHerdInfo const&, std::vector<class Mob*>&) const;
    MCAPI void _spawnMobCluster(class BlockSource&, class BlockPos const&, class SpawnConditions&);
    MCAPI void _spawnMobInCluster(class BlockSource&, struct ActorDefinitionIdentifier, class BlockPos const&, class SpawnConditions const&, std::vector<class Mob*>&);
    //MCAPI void _spawnStructureMob(class BlockSource&, class BlockPos const&, struct LevelChunk::HardcodedSpawningArea const&, class SpawnConditions const&);
    MCAPI void _updateBaseTypeCount(class BlockSource&, class ChunkPos const&);
    MCAPI void _updateMobCounts(class BlockSource&, struct ActorDefinitionIdentifier const&, class SpawnConditions const&);

    MCAPI static class std::unordered_set<class ChunkPos, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<class ChunkPos>> const SPAWN_RING_OFFSETS;

protected:
    MCAPI bool _isSpawnPositionOk(class MobSpawnRules const&, class BlockSource&, class BlockPos const&, bool) const;
    MCAPI void _tickSpawnMobClusters(class BlockSource&, class LevelChunk const&, class BlockPos, class std::function<void(class BlockPos const&, class SpawnConditions&)> const&);
};