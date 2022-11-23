/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_HelloExample_HH__
#define __DEBUG_HelloExample_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union HelloExample
{
    ~HelloExample() {}
    SimpleFlag HelloExample = {
        "HelloExample", "For Learning gem5 Part 2. Simple example debug flag", false
    };
} HelloExample;
} // namespace unions

inline constexpr const auto& HelloExample = 
    ::gem5::debug::unions::HelloExample.HelloExample;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_HelloExample_HH__
