// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SetScorePacketAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SetScorePacket : public Packet {
#include "Extra/SetScorePacketAPI.hpp"
public:
    virtual ~SetScorePacket();
    virtual int /*enum MinecraftPacketIds*/ getId();
    virtual std::string getName();
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_5();
    virtual int /*enum StreamReadResult*/ _read(class ReadOnlyBinaryStream&);

public:
    MCAPI static class SetScorePacket change(struct ScoreboardId const&, class Objective const&);
    MCAPI static class SetScorePacket change(std::vector<struct ScorePacketInfo>);
    MCAPI static class SetScorePacket remove(struct ScoreboardId const&, class Objective const&);

private:
    MCAPI SetScorePacket(enum ScorePacketType, struct ScoreboardId const&, class Objective const&);
};