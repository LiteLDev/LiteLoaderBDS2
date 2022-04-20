// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class VegetationPatchFeature {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VEGETATIONPATCHFEATURE
public:
    class VegetationPatchFeature& operator=(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature(class VegetationPatchFeature const &) = delete;
    VegetationPatchFeature() = delete;
#endif

public:
    /*0*/ virtual ~VegetationPatchFeature();
    /*1*/ virtual class std::optional<class BlockPos> place(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, class RenderParams &) const;

protected:

private:
    MCAPI bool _isExposedDirection(class IBlockWorldGenAPI &, class BlockPos const &, unsigned char) const;
    MCAPI std::vector<class BlockPos> _placeGroundPatch(class IBlockWorldGenAPI &, class Random &, class BlockPos const &, int, int) const;

};