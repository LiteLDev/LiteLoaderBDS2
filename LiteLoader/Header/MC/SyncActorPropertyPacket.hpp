// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SyncActorPropertyPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SyncActorPropertyPacket {
#include "Extra/SyncActorPropertyPacketAPI.hpp"
public:
    virtual ~SyncActorPropertyPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void unk_vfn_3();
    virtual struct ExtendedStreamReadResult readExtended(class ReadOnlyBinaryStream&);
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
};