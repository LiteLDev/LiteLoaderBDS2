// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PlayerTickComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PlayerTickComponent {
#include "Extra/PlayerTickComponentAPI.hpp"

public:
    MCAPI struct PlayerTickComponent& operator=(struct PlayerTickComponent&&);
    MCAPI PlayerTickComponent(std::unique_ptr<struct IPlayerTickPolicy>);
    MCAPI PlayerTickComponent(struct PlayerTickComponent&&);
    MCAPI ~PlayerTickComponent();
};