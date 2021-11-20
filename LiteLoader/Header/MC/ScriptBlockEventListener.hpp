// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBlockEventListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBlockEventListener : public BlockEventListener {
#include "Extra/ScriptBlockEventListenerAPI.hpp"
public:
    virtual ~ScriptBlockEventListener();
    virtual void unk_vfn_1();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual int /*enum EventResult*/ onBlockExploded(class BlockPos const&, class Block const&, class Actor*);
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual int /*enum EventResult*/ onPistonActionEvent(struct PistonActionEvent const&);
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual int /*enum EventResult*/ onExplosionStartedEvent(struct ExplosionStartedEvent const&);
};