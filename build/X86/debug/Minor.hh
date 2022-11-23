/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Minor_HH__
#define __DEBUG_Minor_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
#include "debug/MinorCPU.hh"
#include "debug/MinorExecute.hh"
#include "debug/MinorInterrupt.hh"
#include "debug/MinorMem.hh"
#include "debug/MinorScoreboard.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Minor
{
    ~Minor() {}
    CompoundFlag Minor = {
        "Minor", "", {
            (Flag *)&::gem5::debug::MinorCPU,
            (Flag *)&::gem5::debug::MinorExecute,
            (Flag *)&::gem5::debug::MinorInterrupt,
            (Flag *)&::gem5::debug::MinorMem,
            (Flag *)&::gem5::debug::MinorScoreboard
        }
    };
} Minor;
} // namespace unions

inline constexpr const auto& Minor = 
    ::gem5::debug::unions::Minor.Minor;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Minor_HH__
