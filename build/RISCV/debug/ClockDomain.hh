/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_ClockDomain_HH__
#define __DEBUG_ClockDomain_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union ClockDomain
{
    ~ClockDomain() {}
    SimpleFlag ClockDomain = {
        "ClockDomain", "", false
    };
} ClockDomain;
} // namespace unions

inline constexpr const auto& ClockDomain = 
    ::gem5::debug::unions::ClockDomain.ClockDomain;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ClockDomain_HH__