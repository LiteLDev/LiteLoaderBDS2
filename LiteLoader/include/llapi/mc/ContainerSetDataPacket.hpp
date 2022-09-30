/**
 * @file  ContainerSetDataPacket.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContainerSetDataPacket.
 *
 */
class ContainerSetDataPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERSETDATAPACKET
public:
    class ContainerSetDataPacket& operator=(class ContainerSetDataPacket const &) = delete;
    ContainerSetDataPacket(class ContainerSetDataPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ContainerSetDataPacket();
    /**
     * @hash   -1883580965
     * @vftbl  1
     * @symbol ?getId@ContainerSetDataPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @hash   -359119736
     * @vftbl  2
     * @symbol ?getName@ContainerSetDataPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string getName() const;
    /**
     * @hash   -296460289
     * @vftbl  3
     * @symbol ?write@ContainerSetDataPacket@@UEBAXAEAVBinaryStream@@@Z
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @hash   -2010926193
     * @vftbl  6
     * @symbol ?_read@ContainerSetDataPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @hash   -1325805249
     * @symbol ??0ContainerSetDataPacket@@QEAA@XZ
     */
    MCAPI ContainerSetDataPacket();
    /**
     * @hash   -879171468
     * @symbol ??0ContainerSetDataPacket@@QEAA@W4ContainerID@@HH@Z
     */
    MCAPI ContainerSetDataPacket(enum class ContainerID, int, int);

};