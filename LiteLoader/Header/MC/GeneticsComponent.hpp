// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/GeneticsComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class GeneticsComponent {
#include "Extra/GeneticsComponentAPI.hpp"

public:
    MCAPI class GeneticsComponent& operator=(class GeneticsComponent&&);
    MCAPI void addAdditionalSaveData(class CompoundTag&) const;
    MCAPI void buildDebugInfo(std::string&) const;
    MCAPI struct GeneticsComponent::Gene* findGene(std::string const&);
    MCAPI void fireGeneEvents(class Actor&) const;
    MCAPI void initializeGenesFromParents(class Actor&, class Actor&, class Actor&);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);

    MCAPI static int const INVALID_ALLELE_VALUE;

private:
    MCAPI static std::string const GENE_ARRAY;
    MCAPI static std::string const HIDDEN_ALLELE;
    MCAPI static std::string const MAIN_ALLELE;
};