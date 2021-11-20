// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CommandBlockComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CommandBlockComponent {
#include "Extra/CommandBlockComponentAPI.hpp"

public:
    MCAPI void addAdditionalSaveData(class CompoundTag&);
    MCAPI int decrementTickCount();
    MCAPI class CommandBlockComponent& operator=(class CommandBlockComponent&&);
    MCAPI class BaseCommandBlock& getBaseCommandBlock();
    MCAPI int getCurrentTickCount() const;
    MCAPI bool getTicking() const;
    MCAPI void initFromDefinition(class Actor&);
    MCAPI void onCommandBlockUpdate(class Actor&, std::string const&, bool, std::string, int, bool);
    MCAPI void readAdditionalSaveData(class Actor&, class CompoundTag const&, class DataLoadHelper&);
    MCAPI void resetCurrentTick();
    MCAPI void setLastOutput(class Actor&, std::string const&);
    MCAPI void setTicking(bool);
};