// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FamilyTypeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FamilyTypeDefinition {
#include "Extra/FamilyTypeDefinitionAPI.hpp"

public:
    MCAPI void addFamilyName(std::string const&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct FamilyTypeDefinition>>&);
};