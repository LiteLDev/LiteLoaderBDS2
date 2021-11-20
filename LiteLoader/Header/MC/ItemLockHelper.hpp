// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemLockHelperAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemLockHelper {
#include "Extra/ItemLockHelperAPI.hpp"

public:
    MCAPI static bool canMoveItemSlots(class Actor const&, class ItemStackBase const&);
    MCAPI static enum ItemLockMode getItemLockMode(class ItemStackBase const&);
    MCAPI static bool isItemLocked(class ItemStackBase const&);
    MCAPI static bool isItemLockedInSlot(class ItemStackBase const&);
    MCAPI static bool shouldKeepOnDeath(class Actor const&, class ItemStackBase const&);
    MCAPI static bool shouldKeepOnDeath(class ItemStackBase const&);

private:
    MCAPI static bool _parseItemLockMode(class ItemStackBase&, class Json::Value const&);
};