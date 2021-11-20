// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/PackManifestAPI.hpp"
#undef EXTRA_INCLUDE_PART
class PackManifest {
#include "Extra/PackManifestAPI.hpp"
public:
    virtual ~PackManifest();
    virtual std::unique_ptr<class PackManifest> clone();

public:
    MCAPI void addModule(class ResourceInformation const&);
    MCAPI void addPackCapability(class gsl::basic_string_span<char const, -1>);
    MCAPI class ContentIdentity const& getContentIdentity() const;
    MCAPI std::vector<struct PackIdVersion> const& getDependentPackIdentities() const;
    MCAPI std::string getDescription() const;
    MCAPI enum PackManifestFormat getFormatVersion() const;
    MCAPI struct PackIdVersion const& getIdentity() const;
    MCAPI class ResourceLocation const& getLocation() const;
    MCAPI enum ManifestOrigin getManifestOrigin() const;
    MCAPI class ResourceMetadata const& getMetaData() const;
    MCAPI class SemVersion const& getMinEngineVersion() const;
    MCAPI std::vector<class ResourceInformation> const& getModules() const;
    MCAPI std::string getName() const;
    MCAPI std::string getNameForTelemetry() const;
    MCAPI enum PackManifestFormat getOriginalFormatVersion() const;
    MCAPI enum PackCategory getPackCategory() const;
    MCAPI enum PackOrigin getPackOrigin() const;
    MCAPI unsigned __int64 getPackSize() const;
    MCAPI enum PackType getPackType() const;
    MCAPI class BaseGameVersion const& getRequiredBaseGameVersion() const;
    MCAPI bool hasClientData() const;
    MCAPI bool hasPackCapability(class gsl::basic_string_span<char const, -1>) const;
    MCAPI bool hasPlugins() const;
    MCAPI bool isPremium() const;
    MCAPI void serialize(enum PackManifestFormat, class Json::Value&) const;
    MCAPI void setLastModifiedDate(__int64);

    MCAPI static std::string const MarioPackId;

private:
    MCAPI void _serializeDependencies(class Json::Value&) const;
    MCAPI void _serializeHeader(class Json::Value&) const;
    MCAPI void _serializeModules(class Json::Value&) const;
    MCAPI void _serializeVersion(class Json::Value&, class SemVersion const&) const;
};