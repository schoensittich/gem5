/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_MinorMem_HH__
#define __DEBUG_MinorMem_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union MinorMem
{
    ~MinorMem() {}
    SimpleFlag MinorMem = {
        "MinorMem", "Minor memory accesses", false
    };
} MinorMem;
} // namespace unions

inline constexpr const auto& MinorMem = 
    ::gem5::debug::unions::MinorMem.MinorMem;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_MinorMem_HH__
