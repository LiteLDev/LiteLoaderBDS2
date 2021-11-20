// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/IFileChunkUploaderAPI.hpp"
#undef EXTRA_INCLUDE_PART
class IFileChunkUploader {
#include "Extra/IFileChunkUploaderAPI.hpp"
public:
    virtual ~IFileChunkUploader();
    virtual void unk_vfn_1();
    virtual void initFileUploader(std::string const&, struct FileInfo const&, int, class Json::Value const&, class std::function<void(bool)>);
    virtual void getServerMissingChunks(struct FileInfo const&, class std::function<void(std::vector<struct FileChunkInfo>)>);
    virtual void unk_vfn_4();
    virtual void uploadChunk(struct FileInfo const&, struct FileChunkInfo const&, std::vector<unsigned char> const&, class std::function<void(bool)>);
    virtual void uploadStream(struct FileInfo const&, unsigned __int64, std::string const&, class std::function<void(int /*enum IFileChunkUploader::UploadStreamResult*/)>);
    virtual void unk_vfn_7();
    virtual void unk_vfn_8();
    virtual void unk_vfn_9();
    virtual void unk_vfn_10();
    virtual struct FileChunkInfo getChunkInfo(struct FileInfo const&, int);
};