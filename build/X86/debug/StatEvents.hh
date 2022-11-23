/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_StatEvents_HH__
#define __DEBUG_StatEvents_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union StatEvents
{
    ~StatEvents() {}
    SimpleFlag StatEvents = {
        "StatEvents", "Statistics event tracking", false
    };
} StatEvents;
} // namespace unions

inline constexpr const auto& StatEvents = 
    ::gem5::debug::unions::StatEvents.StatEvents;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_StatEvents_HH__
