/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_ExecEnable_HH__
#define __DEBUG_ExecEnable_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union ExecEnable
{
    ~ExecEnable() {}
    SimpleFlag ExecEnable = {
        "ExecEnable", "Filter: Enable exec tracing (no tracing without this)", false
    };
} ExecEnable;
} // namespace unions

inline constexpr const auto& ExecEnable = 
    ::gem5::debug::unions::ExecEnable.ExecEnable;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecEnable_HH__
