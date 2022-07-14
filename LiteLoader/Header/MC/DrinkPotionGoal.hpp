// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DrinkPotionGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRINKPOTIONGOAL
public:
    class DrinkPotionGoal& operator=(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal(class DrinkPotionGoal const &) = delete;
    DrinkPotionGoal() = delete;
#endif


public:
    /*0*/ virtual ~DrinkPotionGoal();
    /*1*/ virtual bool canUse();
    /*2*/ virtual bool canContinueToUse();
    /*3*/ virtual void __unk_vfn_3();
    /*4*/ virtual void start();
    /*5*/ virtual void stop();
    /*6*/ virtual void tick();
    /*7*/ virtual void appendDebugInfo(std::string &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRINKPOTIONGOAL
#endif
    MCAPI DrinkPotionGoal(class Mob &, float, std::vector<struct DrinkPotionData> const &);

//private:


private:
    MCAPI static class mce::UUID const SPEED_MODIFIER_DRINKING_UUID;
    MCAPI static int const THROTTLE_COOLDOWN;


};