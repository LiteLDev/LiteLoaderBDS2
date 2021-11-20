// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class Packet {
#include "Extra/PacketAPI.hpp"
public:
    virtual ~Packet();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};