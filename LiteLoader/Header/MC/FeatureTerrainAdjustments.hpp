// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FeatureTerrainAdjustmentsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FeatureTerrainAdjustments {
#include "Extra/FeatureTerrainAdjustmentsAPI.hpp"

public:
    MCAPI void setBeardAndShaver(class BoundingBox const&, int, float, float);
    MCAPI void setBury(class BoundingBox const&);
    MCAPI struct FeatureTerrainAdjustments::Descriptions take(class ChunkPos const&);

    MCAPI static float calculateContribution(struct FeatureTerrainAdjustments::Descriptions const&, class BlockPos const&, float);
    MCAPI static bool shouldDoTerrainAdjustments(struct FeatureTerrainAdjustments::Descriptions const&);

private:
    MCAPI void _insertDescriptions(std::vector<class ChunkPos> const&, class std::function<void(struct FeatureTerrainAdjustments::Descriptions&)>&&);
};