// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/UpdateEquipPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class UpdateEquipPacket : public Packet {
#include "Extra/UpdateEquipPacketAPI.hpp"
public:
    virtual ~UpdateEquipPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI UpdateEquipPacket();
    MCAPI UpdateEquipPacket(enum ContainerID, enum ContainerType, int, class CompoundTag&&, struct ActorUniqueID const&);
};