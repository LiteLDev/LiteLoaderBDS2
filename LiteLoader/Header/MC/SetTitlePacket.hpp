// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SetTitlePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SetTitlePacket : public Packet {
#include "Extra/SetTitlePacketAPI.hpp"
public:
    virtual ~SetTitlePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};