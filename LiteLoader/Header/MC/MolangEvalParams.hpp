// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MolangEvalParamsAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MolangEvalParams {
#include "Extra/MolangEvalParamsAPI.hpp"

public:
    MCAPI class Actor* getActorFromArg(struct MolangScriptArg const&) const;
    MCAPI class Actor* getActorPtrFromPushedArray(unsigned __int64, unsigned __int64, bool&) const;
    MCAPI class Actor* popActor();
    MCAPI float popFloat();
    MCAPI unsigned __int64 popHash();
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(class HashedString const&);
    MCAPI unsigned __int64 popMissingVariableOrActorAddress(enum MolangVariableIndex);
    MCAPI bool popPublicAccessMode();
    MCAPI void popRenderParamsCopyAndPtr();
    MCAPI void pushLoopScope(unsigned __int64, unsigned __int64);
    MCAPI void pushRenderParams(class RenderParams const&);
    MCAPI void pushReturnValue();
    MCAPI void pushValue(float);
    MCAPI class RenderParams& renderParams();
    MCAPI class RenderParams const& renderParams() const;
    MCAPI void restoreAndPopStackState();

    MCAPI static struct MolangEvalParams& getLocalThreadEvalParams();

private:
    MCAPI static class Bedrock::Threading::ThreadLocalObject<struct MolangEvalParams, class std::allocator<struct MolangEvalParams>> mThreadLocalMolangEvalParams;
};