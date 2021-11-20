// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/EntityPlacerItemComponentAPI.hpp"
#undef EXTRA_INCLUDE_PART
class EntityPlacerItemComponent {
#include "Extra/EntityPlacerItemComponentAPI.hpp"
public:
    virtual ~EntityPlacerItemComponent();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual bool useOn(class ItemStack&, class Actor&, class BlockPos const&, unsigned char, class Vec3 const&);
    virtual void unk_vfn_4();
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag();
    virtual void initializeFromNetwork(class CompoundTag const&);

public:
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, unsigned char) const;

    MCAPI static void bindType();
    MCAPI static class HashedString const& getIdentifier();

private:
    MCAPI void _positionAndRotateActor(class Actor&, class Vec3, unsigned char, class Vec3 const&, class BlockLegacy const*) const;
    MCAPI void _setActorCustomName(class Actor&, class ItemStack const&) const;
};