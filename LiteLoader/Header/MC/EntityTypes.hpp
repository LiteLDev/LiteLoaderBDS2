// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EntityTypesAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EntityTypes {
#include "Extra/EntityTypesAPI.hpp"

public:
    MCAPI bool parseJson(class Json::Value const&);
    MCAPI ~EntityTypes();
};