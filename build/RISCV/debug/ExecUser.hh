/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_ExecUser_HH__
#define __DEBUG_ExecUser_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union ExecUser
{
    ~ExecUser() {}
    SimpleFlag ExecUser = {
        "ExecUser", "Filter: Trace user mode instructions", false
    };
} ExecUser;
} // namespace unions

inline constexpr const auto& ExecUser = 
    ::gem5::debug::unions::ExecUser.ExecUser;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_ExecUser_HH__
