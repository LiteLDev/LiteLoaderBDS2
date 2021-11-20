// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NBTLoaderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NBTLoader {
#include "Extra/NBTLoaderAPI.hpp"
public:
    virtual ~NBTLoader();
    virtual void unk_vfn_1();
    virtual bool isInt();
    virtual bool isString();
    virtual bool isObject();
    virtual bool isArray();
    virtual bool doSerialize(std::string&);
    virtual void unk_vfn_7();
    virtual bool doSerialize(float&);
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual void unk_vfn_13();
    virtual void unk_vfn_14();
    virtual void unk_vfn_15();
    virtual void unk_vfn_16();
    virtual bool doSerialize(bool&);
    virtual bool doBeginMember(unsigned __int64, std::string&);
    virtual bool doBeginMember(char const*, bool);
    virtual bool doEndMember();
    virtual bool doBeginArray(unsigned __int64&);
    virtual bool doBeginArrayItem(unsigned __int64);
    virtual bool doEndArrayItem();
    virtual void unk_vfn_24();
    virtual bool doBeginObject(unsigned __int64&);
    virtual bool doBeginObject();
    virtual void unk_vfn_27();
    virtual bool isShort();
    virtual void unk_vfn_29();
    virtual bool isFloat();
};