/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_LTage_HH__
#define __DEBUG_LTage_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union LTage
{
    ~LTage() {}
    SimpleFlag LTage = {
        "LTage", "", false
    };
} LTage;
} // namespace unions

inline constexpr const auto& LTage = 
    ::gem5::debug::unions::LTage.LTage;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_LTage_HH__