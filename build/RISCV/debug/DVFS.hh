/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_DVFS_HH__
#define __DEBUG_DVFS_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union DVFS
{
    ~DVFS() {}
    SimpleFlag DVFS = {
        "DVFS", "", false
    };
} DVFS;
} // namespace unions

inline constexpr const auto& DVFS = 
    ::gem5::debug::unions::DVFS.DVFS;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DVFS_HH__
