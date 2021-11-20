// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/VarIntDataInputAPI.hpp"
#undef EXTRA_INCLUDE_PART
class VarIntDataInput {
#include "Extra/VarIntDataInputAPI.hpp"
public:
    virtual ~VarIntDataInput();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual float readFloat();
    virtual double readDouble();
    virtual char readByte();
    virtual short readShort();
    virtual int readInt();
    virtual __int64 readLongLong();
    virtual void unk_vfn_9();
    virtual unsigned __int64 numBytesLeft();
};