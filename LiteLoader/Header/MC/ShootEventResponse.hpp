// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ShootEventResponseAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShootEventResponse {
#include "Extra/ShootEventResponseAPI.hpp"
public:
    virtual ~ShootEventResponse();
    virtual std::string const& getName();
    virtual void executeAction(class RenderParams&);
    virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>>&, class Factory<class EventResponse> const&);

public:
    MCAPI static std::string const NameID;
};