// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class NullLogger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NULLLOGGER
public:
    class NullLogger& operator=(class NullLogger const &) = delete;
    NullLogger(class NullLogger const &) = delete;
    NullLogger() = delete;
#endif

public:
    /*0*/ virtual ~NullLogger();
    /*
    inline void Logv(char const * a0, char * a1){
        void (NullLogger::*rv)(char const *, char *);
        *((void**)&rv) = dlsym("?Logv@NullLogger@@UEAAXPEBDPEAD@Z");
        return (this->*rv)(std::forward<char const *>(a0), std::forward<char *>(a1));
    }
    */
    MCAPI static class NullLogger instance;

protected:

private:

};