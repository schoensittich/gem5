/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_RubySystem_HH__
#define __DEBUG_RubySystem_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union RubySystem
{
    ~RubySystem() {}
    SimpleFlag RubySystem = {
        "RubySystem", "", false
    };
} RubySystem;
} // namespace unions

inline constexpr const auto& RubySystem = 
    ::gem5::debug::unions::RubySystem.RubySystem;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubySystem_HH__
