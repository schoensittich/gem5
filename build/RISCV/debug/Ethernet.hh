/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Ethernet_HH__
#define __DEBUG_Ethernet_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Ethernet
{
    ~Ethernet() {}
    SimpleFlag Ethernet = {
        "Ethernet", "", false
    };
} Ethernet;
} // namespace unions

inline constexpr const auto& Ethernet = 
    ::gem5::debug::unions::Ethernet.Ethernet;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Ethernet_HH__
