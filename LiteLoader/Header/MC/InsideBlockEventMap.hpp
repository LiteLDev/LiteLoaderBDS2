// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InsideBlockEventMapAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InsideBlockEventMap {
#include "Extra/InsideBlockEventMapAPI.hpp"

public:
    MCAPI InsideBlockEventMap(class Block const&, bool, bool, bool, class DefinitionTrigger const&, class DefinitionTrigger const&);
    MCAPI InsideBlockEventMap(class InsideBlockEventMap const&);
    MCAPI class DefinitionTrigger const& getEnteredEvent() const;
    MCAPI class DefinitionTrigger const& getExitedEvent() const;
    MCAPI bool isActorCurrentlyInside() const;
    MCAPI bool isWatchingIfActorEnters() const;
    MCAPI bool isWatchingIfActorExits() const;
    MCAPI bool wasActorInsideLastTick() const;
    MCAPI ~InsideBlockEventMap();
};