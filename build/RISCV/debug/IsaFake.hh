/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_IsaFake_HH__
#define __DEBUG_IsaFake_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union IsaFake
{
    ~IsaFake() {}
    SimpleFlag IsaFake = {
        "IsaFake", "", false
    };
} IsaFake;
} // namespace unions

inline constexpr const auto& IsaFake = 
    ::gem5::debug::unions::IsaFake.IsaFake;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_IsaFake_HH__