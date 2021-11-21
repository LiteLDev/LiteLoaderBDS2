// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerContainerSetterAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerContainerSetter {
#include "Extra/PlayerContainerSetterAPI.hpp"
public:
    virtual ~PlayerContainerSetter();
    virtual void setArmor(int, class ItemStack const&);
    virtual void setOffhandSlot(class ItemStack const&);
    virtual void setPlayerUIItem(int, class ItemStack const&);

public:
    MCAPI PlayerContainerSetter(class Player&);
};