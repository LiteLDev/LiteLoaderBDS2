// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/TickWorldDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class TickWorldDescription {
#include "Extra/TickWorldDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~TickWorldDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};