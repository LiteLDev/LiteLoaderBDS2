// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptBeforeChatEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptBeforeChatEvent {
#include "Extra/ScriptBeforeChatEventAPI.hpp"

public:
    MCAPI ~ScriptBeforeChatEvent();

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptBeforeChatEvent> bind(struct Scripting::Version);
};