/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Scoreboard_HH__
#define __DEBUG_Scoreboard_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Scoreboard
{
    ~Scoreboard() {}
    SimpleFlag Scoreboard = {
        "Scoreboard", "", false
    };
} Scoreboard;
} // namespace unions

inline constexpr const auto& Scoreboard = 
    ::gem5::debug::unions::Scoreboard.Scoreboard;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Scoreboard_HH__