// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NetworkChunkPublisherAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NetworkChunkPublisher {
#include "Extra/NetworkChunkPublisherAPI.hpp"
public:
    virtual ~NetworkChunkPublisher();

public:
    MCAPI void clearRegion();
    MCAPI void destroyRegion();
    MCAPI int getChunksSentSinceStart() const;
    MCAPI bool is2DPositionRelevant(class BlockPos const&) const;
    MCAPI void moveRegion(class BlockPos const&, unsigned int, class Vec3 const&, float);
    MCAPI void prepareRegion(class ChunkSource&, class ChunkPos&);
    MCAPI void sendQueuedChunks();

private:
    MCAPI bool _sendQueuedChunk(class ChunkPos const&, class ClientBlobCache::Server::TransferBuilder*);
    MCAPI void _serializeAndCache(class LevelChunkPacket&, class ClientBlobCache::Server::TransferBuilder&, class std::function<void(class VarIntDataOutput&)>&&);
};