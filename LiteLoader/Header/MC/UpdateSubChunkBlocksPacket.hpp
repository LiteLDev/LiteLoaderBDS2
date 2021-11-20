// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UpdateSubChunkBlocksPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UpdateSubChunkBlocksPacket : public Packet {
#include "Extra/UpdateSubChunkBlocksPacketAPI.hpp"
public:
    virtual ~UpdateSubChunkBlocksPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI void setSubChunkPosition(class SubChunkPos const&);
};