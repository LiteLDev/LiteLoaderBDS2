// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/CreativeItemRegistryAPI.hpp"
#undef EXTRA_INCLUDE_PART
class CreativeItemRegistry {
#include "Extra/CreativeItemRegistryAPI.hpp"
public:
    virtual ~CreativeItemRegistry();

public:
    MCAPI CreativeItemRegistry();
    MCAPI class CreativeItemEntry* findCreativeItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const&);
    MCAPI class CreativeItemEntry* findCreativeItemEntry(class ItemInstance const&);
    MCAPI class CreativeItemGroupCategory* getCreativeCategory(enum CreativeItemCategory);
    MCAPI std::vector<class CreativeItemEntry> const& getCreativeItemEntries();
    MCAPI class CreativeItemEntry* getItemEntry(unsigned int);
    MCAPI class CreativeItemGroupCategory* newCreativeCategory(std::string const&, enum CreativeItemCategory);
    MCAPI class CreativeGroupInfo* newCreativeGroup(enum CreativeItemCategory, class HashedString const&, class ItemInstance const&);
    MCAPI class CreativeItemEntry* newItemEntry(class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const&, class ItemInstance const&);
    MCAPI void resetGroups();
    MCAPI class CreativeItemEntry* updateItemEntry(unsigned int, class ItemInstance const&);
    MCAPI void updateNetIdMap();

    MCAPI static class CreativeItemRegistry* current();
    MCAPI static void forEachCreativeItemInstance(class std::function<bool(class ItemInstance&)>);
    MCAPI static class std::mutex mCreativeListMutex;
    MCAPI static void setCurrentRegistry(std::unique_ptr<class CreativeItemRegistry>&&);

private:
    MCAPI void _forEachCreativeItemInstance(class std::function<bool(class ItemInstance&)>);

    MCAPI static std::unique_ptr<class CreativeItemRegistry> mCurrentRegistry;
};