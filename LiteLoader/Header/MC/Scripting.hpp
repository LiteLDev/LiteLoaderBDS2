// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ScriptingAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace Scripting {
#include "Extra/ScriptingAPI.hpp"

MCAPI struct JSValue ConvertJSValueArgsToNativeAnys(struct JSContext*, class Scripting::Reflection::IFunction*, unsigned int, struct JSValue*, class std::array<class entt::meta_any, 16>&, unsigned int);
MCAPI struct JSValue CopyJSValueArrayToNativeSequenceContainer(struct JSContext*, struct JSValue, class entt::meta_sequence_container&);
MCAPI std::string ExceptionWriter(struct JSContext*);
MCAPI struct JSValue GenericFreeFunctionCaller(struct JSContext*, struct JSValue, int, struct JSValue*, int, struct JSValue*);
MCAPI struct JSValue GenericObjectFunctionCaller(struct JSContext*, struct JSValue, int, struct JSValue*, int, struct JSValue*);
MCAPI struct JSValue GenericReflectionCtorCaller(struct JSContext*, struct JSValue, int, struct JSValue*, int);
MCAPI struct JSValue GenericReflectionPropertyGetter(struct JSContext*, struct JSValue, int, struct JSValue*, int, struct JSValue*);
MCAPI struct JSValue GenericReflectionPropertySetter(struct JSContext*, struct JSValue, int, struct JSValue*, int, struct JSValue*);
MCAPI class Scripting::ContextUserData* GetContextUserData(struct JSContext*);
MCAPI class Scripting::Reflection::IFunction* GetFunctionFromJSFuncData(struct JSContext*, struct JSValue*);
MCAPI unsigned int GetJSArrayLength(struct JSContext*, struct JSValue);
MCAPI std::string GetModuleName(struct JSContext*, struct JSModuleDef*);
MCAPI struct Scripting::ObjectHandle GetNativeObjectHandleFromJSValue(struct JSValue);
MCAPI struct Scripting::PropertyGetSet GetPropertyGetSetFromJSFuncData(struct JSContext*, struct JSValue*);
MCAPI class Scripting::Reflection::IPropertyGetter* GetPropertyGetterFromJSFuncData(struct JSContext*, struct JSValue*);
MCAPI class Scripting::RuntimeUserData* GetRuntimeUserData(struct JSRuntime*);
MCAPI bool HasBaseType(class entt::meta_type, class entt::meta_type);
MCAPI bool HasNativeObjectHandle(struct JSValue);
MCAPI class std::variant<class entt::meta_any, struct JSValue> JSValueToNativeAny(struct JSContext*, struct JSValue, class entt::meta_type);
MCAPI struct JSValue NativeAnyToJSValue(struct JSContext*, class entt::meta_any&, bool, bool);
MCAPI struct JSValue NativeObjectHandleToJSValue(struct JSContext*, struct Scripting::ObjectHandle, bool, enum Scripting::HandleReference);
MCAPI void SetNativeObjectHandleToJSValue(struct Scripting::ObjectHandle, struct JSValue);


} // namespace Scripting