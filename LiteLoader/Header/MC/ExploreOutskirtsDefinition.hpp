// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ExploreOutskirtsDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPLOREOUTSKIRTSDEFINITION
public:
    class ExploreOutskirtsDefinition& operator=(class ExploreOutskirtsDefinition const &) = delete;
    ExploreOutskirtsDefinition(class ExploreOutskirtsDefinition const &) = delete;
#endif

public:
    /*0*/ virtual ~ExploreOutskirtsDefinition();
    MCAPI ExploreOutskirtsDefinition();
    MCAPI void initialize(class EntityContext &, class ExploreOutskirtsGoal &);
    MCAPI static void buildSchema(std::string const &, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class ExploreOutskirtsDefinition>> &);

protected:

private:

};