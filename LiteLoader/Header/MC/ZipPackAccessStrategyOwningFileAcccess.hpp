// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ZipPackAccessStrategyOwningFileAcccessAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ZipPackAccessStrategyOwningFileAcccess : public ZipPackAccessStrategy {
#include "Extra/ZipPackAccessStrategyOwningFileAcccessAPI.hpp"
public:
    virtual ~ZipPackAccessStrategyOwningFileAcccess();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void forEachInAssetSet(class Core::Path const&, class std::function<void(class Core::Path const&)>);
    virtual void unk_vfn_14();
    virtual class Core::PathBuffer<std::string> const& getSubPath();
    virtual void unk_vfn_18();
};