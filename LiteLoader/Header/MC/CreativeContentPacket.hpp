// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CreativeContentPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CreativeContentPacket : public Packet {
#include "Extra/CreativeContentPacketAPI.hpp"
public:
    virtual ~CreativeContentPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI CreativeContentPacket();
    MCAPI CreativeContentPacket(std::vector<class CreativeItemEntry> const&);
};