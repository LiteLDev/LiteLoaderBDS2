// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SlimeMoveControlDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SlimeMoveControlDescription {
#include "Extra/SlimeMoveControlDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~SlimeMoveControlDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};