/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Flow_HH__
#define __DEBUG_Flow_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Flow
{
    ~Flow() {}
    SimpleFlag Flow = {
        "Flow", "", false
    };
} Flow;
} // namespace unions

inline constexpr const auto& Flow = 
    ::gem5::debug::unions::Flow.Flow;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Flow_HH__
