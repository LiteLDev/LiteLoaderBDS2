// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/WorldPackHistoryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class WorldPackHistory {
#include "Extra/WorldPackHistoryAPI.hpp"

public:
    MCAPI WorldPackHistory(class WorldPackHistory const&);
    MCAPI WorldPackHistory(class WorldPackHistory&&);
    MCAPI bool getCanBeRedownloaded() const;
    MCAPI struct PackIdVersion const& getPackIdVersion() const;
    MCAPI class mce::UUID const& getSourceUUID() const;
    MCAPI int getSubpackCount() const;
    MCAPI std::string const& getUnlocalizedName() const;
    MCAPI bool hasLocalizedNames() const;
    MCAPI bool hasSourceUUID() const;
    MCAPI bool hasSubpacks() const;
    MCAPI bool initializeFromJson(class Json::Value const&);
    MCAPI ~WorldPackHistory();
};