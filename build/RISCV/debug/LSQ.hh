/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_LSQ_HH__
#define __DEBUG_LSQ_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union LSQ
{
    ~LSQ() {}
    SimpleFlag LSQ = {
        "LSQ", "", false
    };
} LSQ;
} // namespace unions

inline constexpr const auto& LSQ = 
    ::gem5::debug::unions::LSQ.LSQ;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LSQ_HH__
