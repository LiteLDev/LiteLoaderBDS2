// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OnFallOnTriggerDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ONFALLONTRIGGERDESCRIPTION
public:
    class OnFallOnTriggerDescription& operator=(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription(class OnFallOnTriggerDescription const &) = delete;
    OnFallOnTriggerDescription() = delete;
#endif

public:
    /*0*/ virtual ~OnFallOnTriggerDescription();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void initializeComponent(class EntityContext &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct BlockComponentGroupDescription>> &, class BlockComponentFactory const &) const;
    MCAPI static std::string const NameID;

protected:

private:

};