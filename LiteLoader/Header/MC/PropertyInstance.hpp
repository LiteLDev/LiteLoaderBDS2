// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PropertyInstanceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PropertyInstance {
#include "Extra/PropertyInstanceAPI.hpp"

public:
    MCAPI bool getBool() const;
    MCAPI float getFloat() const;
    MCAPI int getInt() const;
    MCAPI struct MolangScriptArg getMolangValue() const;
    MCAPI struct CustomPropertyDescription const* getPropertyInfo() const;
    MCAPI std::string getString() const;
    MCAPI bool setCurrentState(class Tag const&);
    MCAPI bool setCurrentState(int);
    MCAPI bool setFloatValue(float);
    MCAPI bool setIntValue(int);
};