/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_LSQUnit_HH__
#define __DEBUG_LSQUnit_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union LSQUnit
{
    ~LSQUnit() {}
    SimpleFlag LSQUnit = {
        "LSQUnit", "", false
    };
} LSQUnit;
} // namespace unions

inline constexpr const auto& LSQUnit = 
    ::gem5::debug::unions::LSQUnit.LSQUnit;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LSQUnit_HH__
