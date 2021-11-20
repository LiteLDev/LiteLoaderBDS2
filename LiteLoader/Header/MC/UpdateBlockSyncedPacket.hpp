// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UpdateBlockSyncedPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UpdateBlockSyncedPacket : public Packet {
#include "Extra/UpdateBlockSyncedPacketAPI.hpp"
public:
    virtual ~UpdateBlockSyncedPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};