/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Annotate_HH__
#define __DEBUG_Annotate_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Annotate
{
    ~Annotate() {}
    SimpleFlag Annotate = {
        "Annotate", "State machine annotation debugging", false
    };
} Annotate;
} // namespace unions

inline constexpr const auto& Annotate = 
    ::gem5::debug::unions::Annotate.Annotate;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Annotate_HH__