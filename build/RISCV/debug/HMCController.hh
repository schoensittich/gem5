/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_HMCController_HH__
#define __DEBUG_HMCController_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union HMCController
{
    ~HMCController() {}
    SimpleFlag HMCController = {
        "HMCController", "", false
    };
} HMCController;
} // namespace unions

inline constexpr const auto& HMCController = 
    ::gem5::debug::unions::HMCController.HMCController;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_HMCController_HH__
