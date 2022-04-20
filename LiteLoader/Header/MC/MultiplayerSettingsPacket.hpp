// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MultiplayerSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIPLAYERSETTINGSPACKET
public:
    class MultiplayerSettingsPacket& operator=(class MultiplayerSettingsPacket const &) = delete;
    MultiplayerSettingsPacket(class MultiplayerSettingsPacket const &) = delete;
#endif

public:
    /*0*/ virtual ~MultiplayerSettingsPacket();
    /*1*/ virtual enum MinecraftPacketIds getId() const;
    /*2*/ virtual std::string getName() const;
    /*3*/ virtual void write(class BinaryStream &) const;
    /*6*/ virtual enum StreamReadResult _read(class ReadOnlyBinaryStream &);
    /*
    inline  ~MultiplayerSettingsPacket(){
         (MultiplayerSettingsPacket::*rv)();
        *((void**)&rv) = dlsym("??1MultiplayerSettingsPacket@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MultiplayerSettingsPacket(enum MultiplayerSettingsPacketType);
    MCAPI MultiplayerSettingsPacket();

protected:

private:

};