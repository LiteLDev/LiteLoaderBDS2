// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
#define EXTRA_INCLUDE_PART
#include "Extra/RakWebSocketDataFrameAPI.hpp"
#undef EXTRA_INCLUDE_PART
namespace RakWebSocketDataFrame {
#include "Extra/RakWebSocketDataFrameAPI.hpp"

public:
MCAPI static void writeFrameToStream(class RakNet::BitStream&, unsigned char const*, unsigned int, enum OpCode, bool, unsigned int);

} // namespace RakWebSocketDataFrame