/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_RubyTest_HH__
#define __DEBUG_RubyTest_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union RubyTest
{
    ~RubyTest() {}
    SimpleFlag RubyTest = {
        "RubyTest", "", false
    };
} RubyTest;
} // namespace unions

inline constexpr const auto& RubyTest = 
    ::gem5::debug::unions::RubyTest.RubyTest;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_RubyTest_HH__
