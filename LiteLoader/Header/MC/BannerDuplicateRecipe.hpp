// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Recipe.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BannerDuplicateRecipe : public Recipe {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BANNERDUPLICATERECIPE
public:
    class BannerDuplicateRecipe& operator=(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe(class BannerDuplicateRecipe const &) = delete;
    BannerDuplicateRecipe() = delete;
#endif

public:
    /*0*/ virtual ~BannerDuplicateRecipe();
    /*1*/ virtual std::vector<class ItemInstance> const & assemble(class CraftingContainer &) const;
    /*2*/ virtual int getCraftingSize() const;
    /*3*/ virtual class RecipeIngredient const & getIngredient(int, int) const;
    /*4*/ virtual std::vector<class ItemInstance> const & getResultItem() const;
    /*5*/ virtual bool isMultiRecipe() const;
    /*6*/ virtual bool matches(class CraftingContainer &, class Level &) const;
    /*7*/ virtual int size() const;
    /*10*/ virtual bool isMultiRecipe() const;
    MCAPI BannerDuplicateRecipe(class gsl::basic_string_span<char const, -1>, class mce::UUID const &);
    MCAPI static class mce::UUID const ID;

protected:

private:

};