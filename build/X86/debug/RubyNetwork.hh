/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_RubyNetwork_HH__
#define __DEBUG_RubyNetwork_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union RubyNetwork
{
    ~RubyNetwork() {}
    SimpleFlag RubyNetwork = {
        "RubyNetwork", "", false
    };
} RubyNetwork;
} // namespace unions

inline constexpr const auto& RubyNetwork = 
    ::gem5::debug::unions::RubyNetwork.RubyNetwork;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyNetwork_HH__