// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/IsShakingDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class IsShakingDefinition {
#include "Extra/IsShakingDefinitionAPI.hpp"

public:
    MCAPI void initialize(class EntityContext&);
    MCAPI void uninitialize(class EntityContext&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct IsShakingDefinition>>&);
};