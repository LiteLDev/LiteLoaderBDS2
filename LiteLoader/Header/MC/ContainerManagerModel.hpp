// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ContainerManagerModelAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ContainerManagerModel {
#include "Extra/ContainerManagerModelAPI.hpp"
public:
    virtual ~ContainerManagerModel();
    virtual void unk_vfn_1();
    virtual void unk_vfn_2();
    virtual void unk_vfn_3();
    virtual void unk_vfn_4();
    virtual void serverInitItemStackIds();
    virtual std::vector<class ItemStack> getItemCopies();
    virtual void setSlot(int, class ItemStack const&, bool);
    virtual class ItemStack const& getSlot(int);
    virtual void setData(int, int);
    virtual void broadcastChanges();
    virtual void debitPlayerLevels(int);
    virtual bool isCreativeMode();
    virtual bool isClientSide();
    virtual bool isServerAuthoritative();
    virtual bool isValid(float);
    virtual class ContainerScreenContext _postInit();

public:
    MCAPI void postInit();

protected:
    MCAPI void _addContainer(class std::shared_ptr<class ContainerModel>);
    MCAPI class ContainerScreenContext _containerScreenContext(class BlockPos const&);
    MCAPI class ContainerScreenContext _containerScreenContext(struct ActorUniqueID);
    MCAPI class std::shared_ptr<class ContainerModel> _getContainer(enum ContainerEnumName) const;
    MCAPI bool _isPlayerInRangeOfPosition(class BlockPos const&, float) const;
    MCAPI void _serverInitItemStackIds(class ContainerModel*);

    MCAPI static void _appendCopies(std::vector<class ItemStack>&, std::vector<class ItemStack> const&);
};