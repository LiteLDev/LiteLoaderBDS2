// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ServerLocator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERLOCATOR
public:
    class ServerLocator& operator=(class ServerLocator const &) = delete;
    ServerLocator(class ServerLocator const &) = delete;
    ServerLocator() = delete;
#endif

public:
    /*0*/ virtual ~ServerLocator();
    /*
    inline void _onEnable(){
        void (ServerLocator::*rv)();
        *((void**)&rv) = dlsym("?_onEnable@ServerLocator@@EEAAXXZ");
        return (this->*rv)();
    }
    inline void _onDisable(){
        void (ServerLocator::*rv)();
        *((void**)&rv) = dlsym("?_onDisable@ServerLocator@@EEAAXXZ");
        return (this->*rv)();
    }
    inline  ~ServerLocator(){
         (ServerLocator::*rv)();
        *((void**)&rv) = dlsym("??1ServerLocator@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};