// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TickWorldComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TickWorldComponent {
#include "Extra/TickWorldComponentAPI.hpp"

public:
    MCAPI class std::shared_ptr<class ITickingArea> getTickingArea();
    MCAPI class TickWorldComponent& operator=(class TickWorldComponent&&);
    MCAPI unsigned int getChunkRadius() const;
    MCAPI float getMaxDistToPlayers() const;
    MCAPI bool hasTickingArea() const;
    MCAPI void initFromDefinition(class Actor&);
    MCAPI bool isAlwaysActive() const;
    MCAPI void removeArea();
    MCAPI void setTickingArea(class Actor&, class std::shared_ptr<class ITickingArea>);
    MCAPI void updateArea(class Actor&);
};