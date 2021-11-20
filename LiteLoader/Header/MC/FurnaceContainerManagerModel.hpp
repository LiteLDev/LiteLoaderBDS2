// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/FurnaceContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART
class FurnaceContainerManagerModel : public ContainerManagerModel {
#include "Extra/FurnaceContainerManagerModelAPI.hpp"
public:
    virtual ~FurnaceContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual std::vector<class ItemStack> getItemCopies();
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();

private:
    MCAPI class FurnaceBlockActor* _getFurnaceEntity();
    MCAPI void _updateResultSlotInfo();
};