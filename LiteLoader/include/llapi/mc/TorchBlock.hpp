/**
 * @file  TorchBlock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TorchBlock.
 *
 */
class TorchBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TORCHBLOCK
public:
    class TorchBlock& operator=(class TorchBlock const &) = delete;
    TorchBlock(class TorchBlock const &) = delete;
    TorchBlock() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 10
     * @symbol ?getAABB\@TorchBlock\@\@UEBAAEBVAABB\@\@AEBVIConstBlockSource\@\@AEBVBlockPos\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol __unk_vfn_37
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 42
     * @symbol __unk_vfn_42
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl 44
     * @symbol __unk_vfn_44
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl 45
     * @symbol __unk_vfn_45
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl 46
     * @symbol __unk_vfn_46
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl 47
     * @symbol __unk_vfn_47
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl 48
     * @symbol __unk_vfn_48
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl 49
     * @symbol __unk_vfn_49
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 62
     * @symbol ?canContainLiquid\@TorchBlock\@\@UEBA_NXZ
     */
    virtual bool canContainLiquid() const;
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 92
     * @symbol ?mayPlace\@TorchBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 99
     * @symbol ?neighborChanged\@TorchBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@1\@Z
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl 105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl 106
     * @symbol ?getPlacementBlock\@TorchBlock\@\@UEBAAEBVBlock\@\@AEBVActor\@\@AEBVBlockPos\@\@EAEBVVec3\@\@H\@Z
     */
    virtual class Block const & getPlacementBlock(class Actor const &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /**
     * @vftbl 123
     * @symbol __unk_vfn_123
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl 125
     * @symbol __unk_vfn_125
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl 126
     * @symbol __unk_vfn_126
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl 129
     * @symbol __unk_vfn_129
     */
    virtual void __unk_vfn_129();
    /**
     * @vftbl 132
     * @symbol __unk_vfn_132
     */
    virtual void __unk_vfn_132();
    /**
     * @vftbl 133
     * @symbol ?getIconYOffset\@TorchBlock\@\@UEBAHXZ
     */
    virtual int getIconYOffset() const;
    /**
     * @vftbl 144
     * @symbol ?getVisualShape\@TorchBlock\@\@UEBAAEBVAABB\@\@AEBVBlock\@\@AEAV2\@_N\@Z
     */
    virtual class AABB const & getVisualShape(class Block const &, class AABB &, bool) const;
    /**
     * @vftbl 152
     * @symbol ?animateTick\@TorchBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 157
     * @symbol __unk_vfn_157
     */
    virtual void __unk_vfn_157();
    /**
     * @vftbl 162
     * @symbol ?_addHardCodedBlockComponents\@TorchBlock\@\@UEAAXXZ
     */
    virtual void _addHardCodedBlockComponents();
    /**
     * @vftbl 166
     * @symbol __unk_vfn_166
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl 167
     * @symbol __unk_vfn_167
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl 168
     * @symbol __unk_vfn_168
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl 169
     * @symbol ?onPlace\@TorchBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 171
     * @symbol __unk_vfn_171
     */
    virtual void __unk_vfn_171();
    /**
     * @vftbl 172
     * @symbol ?tick\@TorchBlock\@\@UEBAXAEAVBlockSource\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl 175
     * @symbol __unk_vfn_175
     */
    virtual void __unk_vfn_175();
    /**
     * @vftbl 179
     * @symbol __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl 180
     * @symbol ?canSurvive\@TorchBlock\@\@UEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 182
     * @symbol ?getRenderLayer\@TorchBlock\@\@UEBA?AW4BlockRenderLayer\@\@AEBVBlock\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl 187
     * @symbol __unk_vfn_187
     */
    virtual void __unk_vfn_187();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_TORCHBLOCK
    /**
     * @symbol ?canBeSilkTouched\@TorchBlock\@\@MEBA_NXZ
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?waterSpreadCausesSpawn\@TorchBlock\@\@UEBA_NXZ
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0TorchBlock\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4MaterialType\@\@\@Z
     */
    MCAPI TorchBlock(std::string const &, int, enum class MaterialType);

//protected:
    /**
     * @symbol ?_flameParticlePos\@TorchBlock\@\@IEBA?AVVec3\@\@AEBVBlockPos\@\@W4TorchFacing\@\@\@Z
     */
    MCAPI class Vec3 _flameParticlePos(class BlockPos const &, enum class TorchFacing) const;
    /**
     * @symbol ?canBePlacedOn\@TorchBlock\@\@IEBA_NAEAVBlockSource\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool canBePlacedOn(class BlockSource &, class BlockPos const &, unsigned char) const;

//private:

protected:

private:
    /**
     * @symbol ?DATA_FROM_FACING\@TorchBlock\@\@0QBW4TorchFacing\@\@B
     */
    MCAPI static enum class TorchFacing const DATA_FROM_FACING[];
    /**
     * @symbol ?FACING_FROM_DATA\@TorchBlock\@\@0QBGB
     */
    MCAPI static unsigned short const FACING_FROM_DATA[];

};
