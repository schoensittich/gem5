/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_ExecFlags_HH__
#define __DEBUG_ExecFlags_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union ExecFlags
{
    ~ExecFlags() {}
    SimpleFlag ExecFlags = {
        "ExecFlags", "Format: Include instruction flags in trace", false
    };
} ExecFlags;
} // namespace unions

inline constexpr const auto& ExecFlags = 
    ::gem5::debug::unions::ExecFlags.ExecFlags;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecFlags_HH__
