// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ServerScriptLifetimeManagerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ServerScriptLifetimeManager {
#include "Extra/ServerScriptLifetimeManagerAPI.hpp"
public:
    virtual ~ServerScriptLifetimeManager();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual int /*enum EventResult*/ onServerUpdateStart(class ServerInstance&);
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual int /*enum EventResult*/ onServerThreadStarted(class ServerInstance&);
    virtual int /*enum EventResult*/ onServerThreadStopped(class ServerInstance&);
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();

public:
    MCAPI void onMainThreadStartLeaveGame();

private:
    MCAPI void _registerEventHandlers(class Level&) const;
};