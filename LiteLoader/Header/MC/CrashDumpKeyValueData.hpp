// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CrashDumpKeyValueDataAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CrashDumpKeyValueData {
#include "Extra/CrashDumpKeyValueDataAPI.hpp"

public:
    MCAPI CrashDumpKeyValueData(enum CrashDumpLogStringID, enum CrashDumpLogStringID, int, unsigned __int64);

    MCAPI static struct CrashDumpFormatEntryImpl const* const const kFormat;
};