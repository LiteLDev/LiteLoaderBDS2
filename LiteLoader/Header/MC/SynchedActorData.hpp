// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SynchedActorDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SynchedActorData {
#include "Extra/SynchedActorDataAPI.hpp"

public:
    MCAPI class SynchedActorData _clone() const;
    MCAPI class SynchedActorData& operator=(class SynchedActorData&&);
    MCAPI SynchedActorData();
    MCAPI class CompoundTag const& getCompoundTag(unsigned short) const;
    MCAPI float getFloat(unsigned short) const;
    MCAPI int getInt(unsigned short) const;
    MCAPI __int64 getInt64(unsigned short) const;
    MCAPI signed char getInt8(unsigned short) const;
    MCAPI class BlockPos getPos(unsigned short) const;
    MCAPI short getShort(unsigned short) const;
    MCAPI std::string const& getString(unsigned short) const;
    MCAPI class Vec3 getVec3(unsigned short) const;
    MCAPI bool hasData(unsigned short) const;
    MCAPI void markDirty(unsigned short);
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const;
    MCAPI ~SynchedActorData();


private:
    MCAPI class DataItem* _find(unsigned short) const;
    MCAPI class DataItem& _get(unsigned short);
    MCAPI void _resizeToContain(unsigned short);
};