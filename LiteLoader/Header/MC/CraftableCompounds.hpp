// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CraftableCompoundsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CraftableCompounds {
#include "Extra/CraftableCompoundsAPI.hpp"
public:
    virtual ~CraftableCompounds();
    virtual void _registerCompound(std::vector<class ItemStack> const&, class ItemStack const&, int /*enum LabTableReactionType*/, int /*enum CompoundContainerType*/);

public:
    MCAPI std::vector<class ItemStack> const* getComponents(class ItemDescriptor const&) const;
    MCAPI class ItemStack const& getCompound(std::vector<class ItemStack> const&);
    MCAPI enum LabTableReactionType getReaction(std::vector<class ItemStack> const&);
    MCAPI void registerCompounds();

protected:
    MCAPI std::string _getCompoundId(std::vector<class ItemStack> const&);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const&, class ItemStack const&, enum LabTableReactionType, enum CompoundContainerType);
    MCAPI void _registerCompound(std::vector<struct ChemistryIngredient> const&, enum CompoundType, enum LabTableReactionType, enum CompoundContainerType, int);
};