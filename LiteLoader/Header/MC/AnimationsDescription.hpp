// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AnimationsDescriptionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AnimationsDescription {
#include "Extra/AnimationsDescriptionAPI.hpp"
public:
    virtual char const* getJsonName();
    virtual ~AnimationsDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);

public:
    MCAPI AnimationsDescription();
};