/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_EthernetDesc_HH__
#define __DEBUG_EthernetDesc_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union EthernetDesc
{
    ~EthernetDesc() {}
    SimpleFlag EthernetDesc = {
        "EthernetDesc", "", false
    };
} EthernetDesc;
} // namespace unions

inline constexpr const auto& EthernetDesc = 
    ::gem5::debug::unions::EthernetDesc.EthernetDesc;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_EthernetDesc_HH__
