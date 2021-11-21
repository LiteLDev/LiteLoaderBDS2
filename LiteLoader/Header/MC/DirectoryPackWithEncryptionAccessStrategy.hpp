// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/DirectoryPackWithEncryptionAccessStrategyAPI.hpp"
#undef EXTRA_INCLUDE_PART
class DirectoryPackWithEncryptionAccessStrategy : public PackAccessStrategy {
#include "Extra/DirectoryPackWithEncryptionAccessStrategyAPI.hpp"
public:
    virtual ~DirectoryPackWithEncryptionAccessStrategy();
    virtual unsigned __int64 getPackSize();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual bool isWritable();
    virtual void setIsTrusted(bool);
    virtual bool isTrusted();
    virtual bool hasAsset(class Core::Path const&, bool);
    virtual bool hasFolder(class Core::Path const&);
    virtual bool getAsset(class Core::Path const&, std::string&, bool);
    virtual bool deleteAsset(class Core::PathBuffer<std::string> const&);
    virtual bool writeAsset(class Core::Path const&, std::string const&);
    virtual void forEachIn(class Core::Path const&, class std::function<void(class Core::Path const&)>, bool);
    virtual void forEachInAssetSet(class Core::Path const&, class std::function<void(class Core::Path const&)>);
    virtual void unk_vfn_14();
    virtual std::unique_ptr<class PackAccessStrategy> createSubPack(class Core::Path const&);
    virtual int /*enum PackAccessAssetGenerationResult*/ generateAssetSet();
    virtual void unk_vfn_18();
    virtual void unload();
    virtual bool hasUpgradeFiles();
    virtual class ContentIdentity readContentIdentity();

public:
    MCAPI DirectoryPackWithEncryptionAccessStrategy(class ResourceLocation const&, class ResourceLocation const&, class IContentKeyProvider const&);


private:
    MCAPI bool _hasUnencryptedAsset(class Core::Path const&) const;
};