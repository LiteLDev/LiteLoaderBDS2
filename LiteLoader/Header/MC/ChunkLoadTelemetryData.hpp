// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChunkLoadTelemetryDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChunkLoadTelemetryData {
#include "Extra/ChunkLoadTelemetryDataAPI.hpp"

public:
    MCAPI void recordLoadedChunk(class LevelChunk const&);
    MCAPI class Json::Value toJson() const;
};