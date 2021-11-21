// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/JsonSaverAPI.hpp"
#undef EXTRA_INCLUDE_PART
class JsonSaver {
#include "Extra/JsonSaverAPI.hpp"
public:
    virtual ~JsonSaver();
    virtual bool doSerialize(std::string const&);
    virtual bool doSerialize(double);
    virtual bool doSerialize(float);
    virtual bool doSerialize(unsigned __int64);
    virtual bool doSerialize(__int64);
    virtual bool doSerialize(unsigned int);
    virtual bool doSerialize(int);
    virtual bool doSerialize(unsigned short);
    virtual bool doSerialize(short);
    virtual bool doSerialize(unsigned char);
    virtual bool doSerialize(signed char);
    virtual bool doSerialize(bool);
    virtual bool doBeginMember(unsigned __int64, std::string const&);
    virtual bool doBeginMember(char const*, bool);
    virtual void unk_vfn_15();
    virtual bool doBeginArray(unsigned __int64);
    virtual void unk_vfn_17();
    virtual void unk_vfn_18();
    virtual bool doEndArray();
    virtual void unk_vfn_20();
    virtual bool doBeginObject();
    virtual bool doEndObject();

public:
    MCAPI JsonSaver();
    MCAPI void configurePrettyOutput(bool, char, unsigned int);
    MCAPI std::string toString() const;
};