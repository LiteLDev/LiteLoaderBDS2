// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LevelDbSequentialFileAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LevelDbSequentialFile {
#include "Extra/LevelDbSequentialFileAPI.hpp"
public:
    virtual ~LevelDbSequentialFile();
    virtual class leveldb::Status Read(unsigned __int64, class leveldb::Slice*, char*);
    virtual class leveldb::Status Skip(unsigned __int64);
};