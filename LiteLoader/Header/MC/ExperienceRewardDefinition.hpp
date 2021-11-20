// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ExperienceRewardDefinitionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ExperienceRewardDefinition {
#include "Extra/ExperienceRewardDefinitionAPI.hpp"

public:
    MCAPI void addBredExpressionNode(class ExpressionNode const&);
    MCAPI void addDeathExpressionNode(class ExpressionNode const&);
    MCAPI void initialize(class EntityContext&, class ExperienceRewardComponent&);

    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExperienceRewardDefinition>>&);
};