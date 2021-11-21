// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/JsonUtilAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace JsonUtil {
#include "Extra/JsonUtilAPI.hpp"

MCAPI void LogMissingChildSchemaOption(enum LogArea, class Json::Value const&, std::string const&, std::string const&, std::string const&);
MCAPI void LogUnknownChildSchemaOption(std::string const&, enum LogArea, class Json::Value const&);
MCAPI void eraseSchema(class HashedString const&, class SemVersion const&);
MCAPI class Json::Value& getMemberByCaseInsensitiveName(class Json::Value&, class gsl::basic_string_span<char const, -1> const&);
MCAPI class Json::Value const& getMemberByCaseInsensitiveNameConst(class Json::Value const&, class gsl::basic_string_span<char const, -1> const&);
MCAPI class std::mutex& getSchemaMapLock();
MCAPI bool parseBannerBlockType(enum BannerBlockType&, class Json::Value const&);
MCAPI bool parseItem(std::string&, std::string&, int&, std::string const&);
MCAPI bool parseItemColor(enum ItemColor&, class Json::Value const&);
MCAPI bool parseRange(class Json::Value const&, int&, int&);
MCAPI bool parseVec3(class Vec3&, class Json::Value const&);
MCAPI void printJsonSchema_childNode(std::string&, std::string const&, class HashedString const&, std::string const&, bool, unsigned __int64, unsigned __int64, std::string const&, std::string const&);
MCAPI void setDefaultPrettyName(std::string&, class HashedString const&);


} // namespace JsonUtil