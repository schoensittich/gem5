/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_LupioRTC_HH__
#define __DEBUG_LupioRTC_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union LupioRTC
{
    ~LupioRTC() {}
    SimpleFlag LupioRTC = {
        "LupioRTC", "", false
    };
} LupioRTC;
} // namespace unions

inline constexpr const auto& LupioRTC = 
    ::gem5::debug::unions::LupioRTC.LupioRTC;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LupioRTC_HH__
