/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_NVM_HH__
#define __DEBUG_NVM_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union NVM
{
    ~NVM() {}
    SimpleFlag NVM = {
        "NVM", "", false
    };
} NVM;
} // namespace unions

inline constexpr const auto& NVM = 
    ::gem5::debug::unions::NVM.NVM;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_NVM_HH__