// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MultiRecipeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MultiRecipe : public Recipe {
#include "Extra/MultiRecipeAPI.hpp"
public:
    virtual ~MultiRecipe();
    virtual std::vector<class ItemInstance> const& assemble(class CraftingContainer&);
    virtual int getCraftingSize();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual bool matches(class CraftingContainer&, class Level&);
    virtual int size();
    virtual class mce::UUID const& getId();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_15();
};