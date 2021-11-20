// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VarIntDataOutputAPI.hpp"
#undef EXTRA_INCLUDE_PART
class VarIntDataOutput {
#include "Extra/VarIntDataOutputAPI.hpp"
public:
    virtual ~VarIntDataOutput();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void writeFloat(float);
    virtual void writeDouble(double);
    virtual void writeByte(char);
    virtual void writeShort(short);
    virtual void writeInt(int);
    virtual void writeLongLong(__int64);
    virtual void writeBytes(void const*, unsigned __int64);
};