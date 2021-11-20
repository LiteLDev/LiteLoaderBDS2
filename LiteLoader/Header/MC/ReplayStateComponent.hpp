// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ReplayStateComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ReplayStateComponent {
#include "Extra/ReplayStateComponentAPI.hpp"

public:
    MCAPI class ReplayStateComponent& operator=(class ReplayStateComponent&&);
    MCAPI unsigned __int64 getCurrentTick() const;
    MCAPI struct MovementCorrection shouldSendCorrectionToClient(struct IActorMovementProxy&, class PlayerAuthInputPacket const&) const;
    MCAPI void tick(struct IActorMovementProxy&, unsigned __int64);
};