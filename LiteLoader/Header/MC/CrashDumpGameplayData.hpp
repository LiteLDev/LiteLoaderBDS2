// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CrashDumpGameplayData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRASHDUMPGAMEPLAYDATA
public:
    class CrashDumpGameplayData& operator=(class CrashDumpGameplayData const &) = delete;
    CrashDumpGameplayData(class CrashDumpGameplayData const &) = delete;
    CrashDumpGameplayData() = delete;
#endif

public:
    MCAPI static struct CrashDumpFormatEntryImpl const *const kFormat;

protected:

private:

};