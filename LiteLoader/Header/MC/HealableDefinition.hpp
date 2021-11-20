// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/HealableDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class HealableDefinition {
#include "Extra/HealableDefinitionAPI.hpp"

public:
    MCAPI void addFeedItem(struct FeedItem const&);
    MCAPI void addFeedItemByName(std::string const&);
    MCAPI void deserializeData(class Json::Value&, class SemVersion const&);
    MCAPI void serializeData(class Json::Value&) const;

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class HealableDefinition>>&);

private:
    MCAPI void _loadEffects(struct FeedItem&, class Json::Value&);
};