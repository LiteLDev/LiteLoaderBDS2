// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/LevelDbWritableFileAPI.hpp"
#undef EXTRA_INCLUDE_PART
class LevelDbWritableFile {
#include "Extra/LevelDbWritableFileAPI.hpp"
public:
    virtual ~LevelDbWritableFile();
    virtual class leveldb::Status Append(class leveldb::Slice const&);
    virtual class leveldb::Status Close();
    virtual class leveldb::Status Flush();
    virtual class leveldb::Status Sync();
};