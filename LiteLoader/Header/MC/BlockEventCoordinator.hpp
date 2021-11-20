// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BlockEventCoordinatorAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BlockEventCoordinator {
#include "Extra/BlockEventCoordinatorAPI.hpp"
public:
    virtual ~BlockEventCoordinator();

public:
    MCAPI class BlockGameplayHandler& getBlockGameplayHandler();
    MCAPI void registerBlockGameplayHandler(std::unique_ptr<class BlockGameplayHandler>);
    MCAPI enum CoordinatorResult sendActorInsideBlockEvent(struct ActorInsideBlockEvent const&);
    MCAPI enum CoordinatorResult sendActorStandOnBlockEvent(struct ActorStandOnBlockEvent const&);
    MCAPI void sendBlockDestroyedByPlayer(class Player&, std::string, class BlockPos const&);
    MCAPI void sendBlockDestructionStarted(class Player&, class BlockPos const&);
    MCAPI void sendBlockDestructionStopped(class Player&, class BlockPos const&, int);
    MCAPI void sendBlockExploded(class BlockPos const&, class Block const&, class Actor*);
    MCAPI void sendBlockInteractedWith(class Player&, class BlockPos const&);
    MCAPI void sendBlockMovedByPiston(class BlockPos const&, class BlockPos const&, enum PistonState);
    MCAPI void sendBlockPatternPostEvent(struct BlockPatternEvent const&);
    MCAPI enum CoordinatorResult sendBlockPatternPreEvent(struct BlockPatternEvent const&);
    MCAPI void sendBlockPlacedByPlayer(class Player&, class Block const&, class BlockPos const&, bool);
    MCAPI enum CoordinatorResult sendChestBlockTryPairEvent(struct ChestBlockTryPairEvent const&);
    MCAPI enum CoordinatorResult sendExplosionStarted(struct ExplosionStartedEvent&);
    MCAPI enum CoordinatorResult sendPistonActionEvent(struct PistonActionEvent const&);
    MCAPI void sendUnknownBlockReceived(class Level&, struct NewBlockID const&, unsigned short);
};