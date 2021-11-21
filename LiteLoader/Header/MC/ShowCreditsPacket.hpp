// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ShowCreditsPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ShowCreditsPacket : public Packet {
#include "Extra/ShowCreditsPacketAPI.hpp"
public:
    virtual ~ShowCreditsPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI ShowCreditsPacket();
    MCAPI ShowCreditsPacket(class ActorRuntimeID, enum ShowCreditsPacket::CreditsState);
};