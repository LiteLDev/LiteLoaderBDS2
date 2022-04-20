// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CircuitSceneGraph {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSCENEGRAPH
public:
    class CircuitSceneGraph& operator=(class CircuitSceneGraph const &) = delete;
    CircuitSceneGraph(class CircuitSceneGraph const &) = delete;
#endif

public:
    MCAPI CircuitSceneGraph();
    MCAPI void add(class BlockPos const &, std::unique_ptr<class BaseCircuitComponent>);
    MCAPI class BaseCircuitComponent * addIfPoweredBlockAt(class BlockSource &, class BlockPos const &);
    MCAPI class BaseCircuitComponent * getBaseComponent(class BlockPos const &);
    MCAPI class BaseCircuitComponent * getComponent(class BlockPos const &, enum CircuitComponentType);
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &);
    MCAPI class BaseCircuitComponent * getFromPendingAdd(class BlockPos const &, enum CircuitComponentType);
    MCAPI void invalidatePos(class BlockPos const &);
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    MCAPI void update(class BlockSource *);
    MCAPI ~CircuitSceneGraph();

protected:

private:
    MCAPI void findRelationships(class BlockPos const &, class BaseCircuitComponent *, class BlockSource *);
    MCAPI void processPendingAdds();
    MCAPI void removeComponent(class BlockPos const &);
    MCAPI void removeStaleRelationships();
    MCAPI void scheduleRelationshipUpdate(class BlockPos const &, class BaseCircuitComponent *);

};