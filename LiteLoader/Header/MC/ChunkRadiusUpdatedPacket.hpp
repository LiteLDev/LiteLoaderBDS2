// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ChunkRadiusUpdatedPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ChunkRadiusUpdatedPacket : public Packet {
#include "Extra/ChunkRadiusUpdatedPacketAPI.hpp"
public:
    virtual ~ChunkRadiusUpdatedPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);
};