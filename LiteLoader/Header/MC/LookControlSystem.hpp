// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LookControlSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LookControlSystem : public ITickingSystem {
#include "Extra/LookControlSystemAPI.hpp"
public:
    virtual ~LookControlSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};