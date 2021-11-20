// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/ParserAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace Parser {
#include "Extra/ParserAPI.hpp"

public:
MCAPI static void parse(class Json::Value const&, class SemVersion const&, struct FloatRange&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, unsigned char&, unsigned char);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, int&, char const*, int);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, unsigned int&, char const*, unsigned int);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, float&, char const*, float);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, struct ActorDefinitionIdentifier&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<struct ActorDefinitionIdentifier>&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, struct IntRange&, char const*, int, int);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, struct ItemDefinition&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class Json::Value&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class WeightedChoices<class DefinitionTrigger>&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::string&, char const*, char const*);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, enum FilterSubject&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<struct SlotDropChance>&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<class BlockDescriptor>&);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<class BlockDescriptor>&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<class ItemDescriptor>&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, std::vector<enum LevelSoundEvent>&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class BlockDescriptor&);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class FilterGroup&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class MobEffectInstance&, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, class Vec3&, char const*, class Vec3 const&);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, enum ActorDamageCause&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, enum ActorType&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, enum Difficulty&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, enum ParticleType&, char const*, char const*);
MCAPI static void parse(class Json::Value const&, class SemVersion const&, bool&, char const*, bool);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, std::vector<class DefinitionTrigger>&);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, std::vector<class ItemDescriptor>&);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class DefinitionTrigger&, char const*);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class DefinitionTrigger&, bool);
MCAPI static bool parse(class Json::Value const&, class SemVersion const&, class ItemDescriptor&);
MCAPI static void serialize(class ActorFilterGroup const&, class Json::Value&, char const*);
MCAPI static void serialize(struct ActorDefinitionIdentifier const&, class Json::Value&, char const*);
MCAPI static void serialize(struct FloatRange const&, class Json::Value&, char const*);
MCAPI static void serialize(struct IntRange const&, class Json::Value&, char const*);
MCAPI static void serialize(struct ItemDefinition const&, class Json::Value&, char const*);
MCAPI static void serialize(std::vector<struct ActorDefinitionIdentifier> const&, class Json::Value&, char const*);
MCAPI static void serialize(std::vector<class BlockDescriptor> const&, class Json::Value&, char const*);
MCAPI static void serialize(std::vector<class ItemDescriptor> const&, class Json::Value&, char const*);
MCAPI static void serialize(std::vector<class MobEffectInstance> const&, class Json::Value&, char const*);
MCAPI static void serialize(std::vector<enum LevelSoundEvent> const&, class Json::Value&, char const*);
MCAPI static void serialize(class DefinitionTrigger const&, class Json::Value&, char const*);
MCAPI static void serialize(class HashedString const&, class Json::Value&, char const*);
MCAPI static void serialize(class ItemDescriptor const&, class Json::Value&);
MCAPI static void serialize(class ItemDescriptor const&, class Json::Value&, char const*);
MCAPI static void serialize(class MobEffectInstance const&, class Json::Value&, char const*);
MCAPI static void serialize(class Vec3 const&, class Json::Value&, char const*);
MCAPI static void serialize(enum ActorDamageCause const&, class Json::Value&, char const*);
MCAPI static void serialize(enum ActorType const&, class Json::Value&, char const*);
MCAPI static void serialize(enum Difficulty const&, class Json::Value&, char const*);
MCAPI static void serialize(enum ParticleType const&, class Json::Value&, char const*);

} // namespace Parser