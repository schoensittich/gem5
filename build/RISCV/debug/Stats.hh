/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Stats_HH__
#define __DEBUG_Stats_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Stats
{
    ~Stats() {}
    SimpleFlag Stats = {
        "Stats", "Statistics management", false
    };
} Stats;
} // namespace unions

inline constexpr const auto& Stats = 
    ::gem5::debug::unions::Stats.Stats;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Stats_HH__
