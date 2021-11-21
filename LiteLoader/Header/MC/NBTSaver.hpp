// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/NBTSaverAPI.hpp"
#undef EXTRA_INCLUDE_PART
class NBTSaver {
#include "Extra/NBTSaverAPI.hpp"
public:
    virtual ~NBTSaver();
    virtual bool doSerialize(std::string const&);
    virtual void unk_vfn_2();
    virtual bool doSerialize(float);
    virtual void unk_vfn_4();
    virtual void unk_vfn_5();
    virtual void unk_vfn_6();
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual void unk_vfn_11();
    virtual void unk_vfn_12();
    virtual bool doBeginMember(unsigned __int64, std::string const&);
    virtual bool doBeginMember(char const*, bool);
    virtual bool doEndMember();
    virtual bool doBeginArray(unsigned __int64);
    virtual bool doBeginArrayItem(unsigned __int64);
    virtual bool doEndArrayItem();
    virtual void unk_vfn_19();
    virtual void unk_vfn_20();
    virtual bool doBeginObject();
    virtual void unk_vfn_22();

public:
    MCAPI NBTSaver();
    MCAPI class CompoundTag getSavedCompoundTag();


private:
    MCAPI bool _serializeTag(std::unique_ptr<class Tag>);
};