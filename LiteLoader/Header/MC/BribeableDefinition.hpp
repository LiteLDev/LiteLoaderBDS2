// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BribeableDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRIBEABLEDEFINITION
public:
    class BribeableDefinition& operator=(class BribeableDefinition const &) = delete;
    BribeableDefinition(class BribeableDefinition const &) = delete;
    BribeableDefinition() = delete;
#endif

public:
    MCAPI void addBribeItem(class ItemDescriptor const &);
    MCAPI void initialize(class EntityContext &, class BribeableComponent &);
    MCAPI static void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class BribeableDefinition>> &);

protected:

private:

};