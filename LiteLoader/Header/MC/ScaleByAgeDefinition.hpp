// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScaleByAgeDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScaleByAgeDefinition {
#include "Extra/ScaleByAgeDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&, class ScaleByAgeComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ScaleByAgeDefinition>>&);
};