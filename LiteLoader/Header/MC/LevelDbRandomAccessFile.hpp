// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LevelDbRandomAccessFileAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LevelDbRandomAccessFile {
#include "Extra/LevelDbRandomAccessFileAPI.hpp"
public:
    virtual ~LevelDbRandomAccessFile();
    virtual class leveldb::Status Read(unsigned __int64, unsigned __int64, class leveldb::Slice*, char*);
};