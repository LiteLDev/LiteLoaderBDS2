// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ActorDefinitionIdentifierAPI.hpp"
#undef EXTRA_INCLUDE_PART
struct ActorDefinitionIdentifier {
#include "Extra/ActorDefinitionIdentifierAPI.hpp"

public:
    MCAPI bool Deserialize(class BasicLoader&, struct SerializerTraits const&, class BedrockLoadContext const&);
    MCAPI bool Serialize(class BasicSaver&, struct SerializerTraits const&) const;
    MCAPI enum ActorType _getLegacyActorType() const;
    MCAPI void clear();
    MCAPI bool operator==(struct ActorDefinitionIdentifier const&);
    MCAPI struct ActorDefinitionIdentifier& operator=(struct ActorDefinitionIdentifier const&);
    MCAPI class HashedString const& getCanonicalHash() const;
    MCAPI std::string const& getCanonicalName() const;
    MCAPI std::string const& getFullName() const;
    MCAPI std::string const& getIdentifier() const;
    MCAPI std::string const& getInitEvent() const;
    MCAPI std::string const& getNamespace() const;
    MCAPI void initialize(std::string const&, std::string const&, std::string const&);
    MCAPI void initialize(std::string const&);
    MCAPI bool isEmpty() const;
    MCAPI bool isVanilla() const;
    MCAPI void setIdentifier(std::string const&);
    MCAPI void setInitEvent(std::string const&);

    MCAPI static std::string const EVENT_BEGIN;
    MCAPI static std::string const EVENT_END;
    MCAPI static std::string const NAMESPACE_SEPARATOR;

private:
    MCAPI void _initialize();

    MCAPI static void _extractIdentifier(std::string const&, struct ActorDefinitionIdentifier&);
};