/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_TokenPort_HH__
#define __DEBUG_TokenPort_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union TokenPort
{
    ~TokenPort() {}
    SimpleFlag TokenPort = {
        "TokenPort", "", false
    };
} TokenPort;
} // namespace unions

inline constexpr const auto& TokenPort = 
    ::gem5::debug::unions::TokenPort.TokenPort;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_TokenPort_HH__
