// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/BaseCommandBlockAPI.hpp"
#undef EXTRA_INCLUDE_PART
class BaseCommandBlock {
#include "Extra/BaseCommandBlockAPI.hpp"

public:
    MCAPI std::string const& getCommand() const;
    MCAPI std::string getLastOutput() const;
    MCAPI std::string const& getName() const;
    MCAPI int getTickDelay() const;
    MCAPI bool getTrackOutput() const;
    MCAPI void load(class CompoundTag const&, class DataLoadHelper&);
    MCAPI bool performCommand(class BlockSource&, struct ActorUniqueID const&);
    MCAPI bool save(class CompoundTag&) const;
    MCAPI void setCommand(class BlockSource&, struct ActorUniqueID const&, std::string const&);
    MCAPI void setCommand(class BlockSource&, class BlockPos const&, std::string const&);
    MCAPI void setName(std::string const&);
    MCAPI void setShouldExecuteOnFirstTick(bool);
    MCAPI void setTickDelay(int);
    MCAPI void setTrackOutput(bool);
    MCAPI bool shouldExecuteOnFirstTick() const;

private:
    MCAPI bool _performCommand(class BlockSource&, class CommandOrigin const&, bool&);
    MCAPI void _setCommand(class BlockSource&, class CommandOrigin const&, std::string const&);
    MCAPI void compile(class CommandOrigin const&, class Level&);

    MCAPI static std::string const DefaultCommandBlockName;
};