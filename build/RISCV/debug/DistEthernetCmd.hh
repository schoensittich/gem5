/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_DistEthernetCmd_HH__
#define __DEBUG_DistEthernetCmd_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union DistEthernetCmd
{
    ~DistEthernetCmd() {}
    SimpleFlag DistEthernetCmd = {
        "DistEthernetCmd", "", false
    };
} DistEthernetCmd;
} // namespace unions

inline constexpr const auto& DistEthernetCmd = 
    ::gem5::debug::unions::DistEthernetCmd.DistEthernetCmd;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DistEthernetCmd_HH__
