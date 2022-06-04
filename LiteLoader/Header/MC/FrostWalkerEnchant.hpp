// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Enchant.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FrostWalkerEnchant : public Enchant {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FROSTWALKERENCHANT
public:
    class FrostWalkerEnchant& operator=(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant(class FrostWalkerEnchant const &) = delete;
    FrostWalkerEnchant() = delete;
#endif

public:
    /*0*/ virtual ~FrostWalkerEnchant();
    /*2*/ virtual int getMinCost(int) const;
    /*3*/ virtual int getMaxCost(int) const;
    /*5*/ virtual int getMaxLevel() const;
    /*10*/ virtual void __unk_vfn_10();
    /*11*/ virtual void __unk_vfn_11();
    /*12*/ virtual void __unk_vfn_12();
    /*13*/ virtual void __unk_vfn_13();
    /*
    inline bool isTreasureOnly() const{
        bool (FrostWalkerEnchant::*rv)() const;
        *((void**)&rv) = dlsym("?isTreasureOnly@FrostWalkerEnchant@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI FrostWalkerEnchant(enum Enchant::Type, enum Enchant::Frequency, class gsl::basic_string_span<char const, -1>, class gsl::basic_string_span<char const, -1>, int, int);

protected:

private:

};