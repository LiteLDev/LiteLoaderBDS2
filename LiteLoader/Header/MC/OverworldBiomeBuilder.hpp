// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/OverworldBiomeBuilderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class OverworldBiomeBuilder {
#include "Extra/OverworldBiomeBuilderAPI.hpp"

public:
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget>&, class BiomeRegistry const&) const;

private:
    MCAPI void _addHighSlice(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&) const;
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget>&) const;
    MCAPI void _addLowSlice(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&) const;
    MCAPI void _addMidSlice(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&) const;
    MCAPI void _addOffCoastBiomes(std::vector<struct BiomeNoiseTarget>&) const;
    MCAPI void _addPeaks(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&) const;
    MCAPI void _addSurfaceBiome(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&, struct Parameter const&, struct Parameter const&, struct Parameter const&, struct Parameter const&, float, class Biome*) const;
    MCAPI void _addUndergroundBiome(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&, struct Parameter const&, struct Parameter const&, struct Parameter const&, struct Parameter const&, float, class Biome*) const;
    MCAPI void _addValleys(std::vector<struct BiomeNoiseTarget>&, struct Parameter const&) const;

    MCAPI static struct Parameter const* const const EROSIONS;
    MCAPI static struct Parameter const FULL_RANGE;
    MCAPI static struct Parameter const* const const HUMIDITIES;
    MCAPI static struct Parameter const* const const TEMPERATURES;
    MCAPI static struct Parameter const coastContinentalness;
    MCAPI static struct Parameter const deepOceanContinentalness;
    MCAPI static struct Parameter const dripstoneCavesContinentalness;
    MCAPI static struct Parameter const farInlandContinentalness;
    MCAPI static struct Parameter const inlandContinentalness;
    MCAPI static struct Parameter const lushCavesHumidity;
    MCAPI static struct Parameter const midInlandContinentalness;
    MCAPI static struct Parameter const mushroomFieldsContinentalness;
    MCAPI static struct Parameter const nearInlandContinentalness;
    MCAPI static struct Parameter const oceanContinentalness;
};