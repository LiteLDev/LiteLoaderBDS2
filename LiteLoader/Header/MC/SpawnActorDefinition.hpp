// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SpawnActorDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SpawnActorDefinition {
#include "Extra/SpawnActorDefinitionAPI.hpp"

public:
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void initialize(class EntityContext&, class SpawnActorComponent&) const;
    MCAPI void serializeData(class Json::Value&) const;
    MCAPI ~SpawnActorDefinition();

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SpawnActorDefinition>>&);

private:
    MCAPI void _parseSpawnEntry(class Json::Value&, class SemVersion const&);
};