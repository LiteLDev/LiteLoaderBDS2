// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RealmsUnknownPackSourceAPI.hpp"
#undef EXTRA_INCLUDE_PART
class RealmsUnknownPackSource {
#include "Extra/RealmsUnknownPackSourceAPI.hpp"
public:
    virtual ~RealmsUnknownPackSource();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual class PackSourceReport load(class IPackManifestFactory&, class IContentKeyProvider const&);
};