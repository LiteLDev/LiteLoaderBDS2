// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DecoratorDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DECORATORDEFINITION
public:
    class DecoratorDefinition& operator=(class DecoratorDefinition const &) = delete;
    DecoratorDefinition(class DecoratorDefinition const &) = delete;
    DecoratorDefinition() = delete;
#endif

public:
    MCAPI class BehaviorDefinition const * get() const;

protected:
    MCAPI static std::unique_ptr<class BehaviorDefinition> _decoratorLoadChildBehavior(class Json::Value, class BehaviorFactory const &, class BehaviorTreeDefinitionPtr);

private:

};