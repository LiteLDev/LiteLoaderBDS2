// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ListTagAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ListTag : public Tag {
#include "Extra/ListTagAPI.hpp"
public:
    virtual ~ListTag();
    virtual void deleteChildren();
    virtual void write(class IDataOutput&);
    virtual void load(class IDataInput&);
    virtual std::string toString();
    virtual void unk_vfn_5();
    virtual bool equals(class Tag const&);
    virtual void print(std::string const&, class PrintStream&);
    virtual std::unique_ptr<class Tag> copy();
    virtual unsigned __int64 hash();

public:
    MCAPI ListTag();
    MCAPI void add(std::unique_ptr<class Tag>);
    MCAPI std::unique_ptr<class ListTag> copyList() const;
    MCAPI class Tag* get(int) const;
    MCAPI class CompoundTag const* getCompound(unsigned __int64) const;
    MCAPI double getDouble(int) const;
    MCAPI float getFloat(int) const;
    MCAPI int getInt(int) const;
    MCAPI std::string const& getString(int) const;
    MCAPI int size() const;
};