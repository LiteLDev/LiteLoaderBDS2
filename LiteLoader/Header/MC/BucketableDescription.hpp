// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BucketableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETABLEDESCRIPTION
public:
    class BucketableDescription& operator=(class BucketableDescription const &) = delete;
    BucketableDescription(class BucketableDescription const &) = delete;
    BucketableDescription() = delete;
#endif

public:
    /*0*/ virtual char const * getJsonName() const;
    /*1*/ virtual ~BucketableDescription();
    /*3*/ virtual void serializeData(class Json::Value &) const;
    /*
    inline  ~BucketableDescription(){
         (BucketableDescription::*rv)();
        *((void**)&rv) = dlsym("??1BucketableDescription@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};