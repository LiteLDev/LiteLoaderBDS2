// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerSnapshotComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerSnapshotComponent {
#include "Extra/PlayerSnapshotComponentAPI.hpp"

public:
    MCAPI bool hasStateFlag(enum PlayerSnapshotStateFlag) const;
    MCAPI void setStateFlag(enum PlayerSnapshotStateFlag, bool);
};