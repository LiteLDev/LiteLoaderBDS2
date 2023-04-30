/**
 * @file  LibraryScreenCapabilities.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA


struct LibraryScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIBRARYSCREENCAPABILITIES
public:
    struct LibraryScreenCapabilities& operator=(struct LibraryScreenCapabilities const &) = delete;
    LibraryScreenCapabilities(struct LibraryScreenCapabilities const &) = delete;
    LibraryScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isOfType\@?$TypedScreenCapabilities\@ULibraryScreenCapabilities\@\@\@\@UEBA_NV?$typeid_t\@VIScreenCapabilities\@\@\@Bedrock\@\@\@Z
     */
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_LIBRARYSCREENCAPABILITIES
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~LibraryScreenCapabilities();
#endif

};