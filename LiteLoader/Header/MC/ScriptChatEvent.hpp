// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptChatEventAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ScriptChatEvent {
#include "Extra/ScriptChatEventAPI.hpp"

public:
    MCAPI void copyTo(struct ChatEvent&, class Scripting::WeakLifetimeScope const&) const;

    MCAPI static class Scripting::ClassBindingBuilder<struct ScriptChatEvent> bind(struct Scripting::Version);
};