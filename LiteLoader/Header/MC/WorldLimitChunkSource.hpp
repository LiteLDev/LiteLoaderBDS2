// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldLimitChunkSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldLimitChunkSource : public ChunkSource {
#include "Extra/WorldLimitChunkSourceAPI.hpp"
public:
    virtual ~WorldLimitChunkSource();
    virtual class std::shared_ptr<class LevelChunk> getExistingChunk(class ChunkPos const&);
    virtual class std::shared_ptr<class LevelChunk> getRandomChunk(class Random&);
    virtual class std::shared_ptr<class LevelChunk> createNewChunk(class ChunkPos const&, int /*enum ChunkSource::LoadMode*/, bool);
    virtual bool postProcess(class ChunkViewSource&);
    virtual void checkAndReplaceChunk(class ChunkViewSource&, class LevelChunk&);
    virtual bool isWithinWorldLimit(class ChunkPos const&);
    virtual void unk_vfn_19();
    virtual void clearDeletedEntities();
    virtual void unk_vfn_22();
};