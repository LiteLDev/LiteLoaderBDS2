// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/AvailableCommandsPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class AvailableCommandsPacket : public Packet {
#include "Extra/AvailableCommandsPacketAPI.hpp"
public:
    virtual ~AvailableCommandsPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};