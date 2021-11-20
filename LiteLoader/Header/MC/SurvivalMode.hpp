// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/SurvivalModeAPI.hpp"
#undef EXTRA_INCLUDE_PART
class SurvivalMode : public GameMode {
#include "Extra/SurvivalModeAPI.hpp"
public:
    virtual ~SurvivalMode();
    virtual bool startDestroyBlock(class BlockPos const&, unsigned char, bool&);
    virtual bool destroyBlock(class BlockPos const&, unsigned char);
    virtual void startBuildBlock(class BlockPos const&, unsigned char);
    virtual bool buildBlock(class BlockPos const&, unsigned char, bool);
    virtual void tick();
    virtual bool useItem(class ItemStack&);
    virtual bool useItemOn(class ItemStack&, class BlockPos const&, unsigned char, class Vec3 const&, class Block const*);
    virtual bool interact(class Actor&, class Vec3 const&);
    virtual bool attack(class Actor&);
    virtual void unk_vfn_16();
    virtual bool isInTrialMode();
    virtual void registerUpsellScreenCallback(class std::function<void(bool)>);

private:
    MCAPI void _messagePlayers(std::string);
    MCAPI void _showTrialReminder(bool);

    MCAPI static bool mTrialHasEnded;
};