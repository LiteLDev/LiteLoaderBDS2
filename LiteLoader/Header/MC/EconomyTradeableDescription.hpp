// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EconomyTradeableDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EconomyTradeableDescription {
#include "Extra/EconomyTradeableDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~EconomyTradeableDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};