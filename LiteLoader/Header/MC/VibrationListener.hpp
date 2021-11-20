// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VibrationListenerAPI.hpp"
#undef EXTRA_INCLUDE_PART
class VibrationListener {
#include "Extra/VibrationListenerAPI.hpp"
public:
    virtual ~VibrationListener();
    virtual void handleGameEvent(class GameEvent const&, class BlockPos const&, class Actor const*, class BlockSource&);
    virtual class BlockPos getOwnerPos();
    virtual bool isEventInRange(class GameEvent const&, class BlockPos const&);

public:
    MCAPI class GameEvent const& getGameEvent() const;
    MCAPI unsigned __int64 getRange() const;
    MCAPI bool isWaiting() const;
    MCAPI void stopWaiting();

    MCAPI static int getGameEventFrequency(class GameEvent const&);
};