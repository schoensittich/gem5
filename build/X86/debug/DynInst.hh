/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_DynInst_HH__
#define __DEBUG_DynInst_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union DynInst
{
    ~DynInst() {}
    SimpleFlag DynInst = {
        "DynInst", "", false
    };
} DynInst;
} // namespace unions

inline constexpr const auto& DynInst = 
    ::gem5::debug::unions::DynInst.DynInst;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_DynInst_HH__
