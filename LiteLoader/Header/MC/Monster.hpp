// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Monster : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MONSTER
public:
    class Monster& operator=(class Monster const &) = delete;
    Monster(class Monster const &) = delete;
    Monster() = delete;
#endif

public:
    /*14*/ virtual ~Monster();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*113*/ virtual class Actor * findAttackTarget();
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*294*/ virtual void aiStep();
    /*299*/ virtual bool checkSpawnRules(bool);
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*343*/ virtual float _getWalkTargetValue(class BlockPos const &);
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
    /*361*/ virtual bool isDarkEnoughToSpawn() const;
    /*
    inline bool canExistInPeaceful() const{
        bool (Monster::*rv)() const;
        *((void**)&rv) = dlsym("?canExistInPeaceful@Monster@@UEBA_NXZ");
        return (this->*rv)();
    }
    */
    MCAPI Monster(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);

protected:

private:

};