// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/MotionPredictionHintsPacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class MotionPredictionHintsPacket : public Packet {
#include "Extra/MotionPredictionHintsPacketAPI.hpp"
public:
    virtual ~MotionPredictionHintsPacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI MotionPredictionHintsPacket();
    MCAPI MotionPredictionHintsPacket(class Actor const&);
};