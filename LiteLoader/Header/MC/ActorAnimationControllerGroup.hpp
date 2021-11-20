// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorAnimationControllerGroupAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ActorAnimationControllerGroup {
#include "Extra/ActorAnimationControllerGroupAPI.hpp"

public:
    MCAPI class ActorAnimationControllerPtr getActorAnimationController(class HashedString const&);
    MCAPI class std::shared_ptr<class ActorAnimationControllerInfo> getActorAnimationControllerInfo(class HashedString const&);
    MCAPI void loadActorAnimationControllersSync(class ResourcePackManager&);

    MCAPI static bool loadFormatVersion(class Json::Value const&, class SemVersion&);

private:
    MCAPI void _loadActorAnimationController(std::string const&, class Core::Path const&, enum CurrentCmdVersion);

    MCAPI static class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, bool>> _buildAnimationControllerFileSchema_v1_8();
    MCAPI static bool upgrade_v1_8_to_v1_10(class Json::Value&, class SemVersion const&);
};