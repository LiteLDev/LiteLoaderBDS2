// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ItemUseInventoryTransactionAPI.hpp"
#undef EXTRA_INCLUDE_PART
class ItemUseInventoryTransaction {
#include "Extra/ItemUseInventoryTransactionAPI.hpp"
public:
    virtual ~ItemUseInventoryTransaction();
    virtual void read(class ReadOnlyBinaryStream&);
    virtual void write(class BinaryStream&);
    virtual void unk_vfn_3();
    virtual int /*enum InventoryTransactionError*/ handle(class Player&, bool);
    virtual void onTransactionError(class Player&, int /*enum InventoryTransactionError*/);

public:
    MCAPI ItemUseInventoryTransaction(class ItemUseInventoryTransaction const&);
    MCAPI class ItemUseInventoryTransaction& operator=(class ItemUseInventoryTransaction const&);
    MCAPI void resendBlocksAroundArea(class Player&, class BlockPos const&, unsigned char) const;
    MCAPI class ItemUseInventoryTransaction& setSelectedItem(class ItemStack const&);


private:
    MCAPI static class BidirectionalUnorderedMap<enum ItemUseInventoryTransaction::ActionType, std::string> const actionTypeMap;
};