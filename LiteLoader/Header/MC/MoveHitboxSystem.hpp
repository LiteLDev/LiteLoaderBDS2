// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class MoveHitboxSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEHITBOXSYSTEM
public:
    class MoveHitboxSystem& operator=(class MoveHitboxSystem const &) = delete;
    MoveHitboxSystem(class MoveHitboxSystem const &) = delete;
    MoveHitboxSystem() = delete;
#endif

public:
    MCAPI static void moveHitboxTo(class Vec3 const &, std::vector<struct Hitbox> &);

protected:

private:

};