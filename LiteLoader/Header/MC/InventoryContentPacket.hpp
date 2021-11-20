// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/InventoryContentPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class InventoryContentPacket : public Packet {
#include "Extra/InventoryContentPacketAPI.hpp"
public:
    virtual ~InventoryContentPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI static class InventoryContentPacket fromPlayerInventoryId(enum ContainerID, class Player&);
};