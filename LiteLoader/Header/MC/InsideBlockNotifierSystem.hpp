// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InsideBlockNotifierSystemAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InsideBlockNotifierSystem : public ITickingSystem {
#include "Extra/InsideBlockNotifierSystemAPI.hpp"
public:
    virtual ~InsideBlockNotifierSystem();
    virtual void unk_vfn_1();
    virtual void tick(class EntityRegistry&);
};