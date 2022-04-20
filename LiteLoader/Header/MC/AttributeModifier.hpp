// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AttributeModifier {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEMODIFIER
public:
    AttributeModifier(class AttributeModifier const &) = delete;
#endif

public:
    /*0*/ virtual ~AttributeModifier();
    /*
    inline bool isInstantaneous() const{
        bool (AttributeModifier::*rv)() const;
        *((void**)&rv) = dlsym("?isInstantaneous@AttributeModifier@@UEBA_NXZ");
        return (this->*rv)();
    }
    inline  ~AttributeModifier(){
         (AttributeModifier::*rv)();
        *((void**)&rv) = dlsym("??1AttributeModifier@@UEAA@XZ");
        return (this->*rv)();
    }
    */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, int, int, bool);
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, enum AttributeModifierOperation, enum AttributeOperands, bool);
    MCAPI AttributeModifier();
    MCAPI float getAmount() const;
    MCAPI class mce::UUID const & getId() const;
    MCAPI std::string const & getName() const;
    MCAPI int getOperand() const;
    MCAPI int getOperation() const;
    MCAPI class AttributeModifier & operator=(class AttributeModifier const &);
    MCAPI bool operator==(class AttributeModifier const &) const;

protected:

private:
    MCAPI static class mce::UUID const mInvalidUUID;

};