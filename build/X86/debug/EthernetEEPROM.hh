/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_EthernetEEPROM_HH__
#define __DEBUG_EthernetEEPROM_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union EthernetEEPROM
{
    ~EthernetEEPROM() {}
    SimpleFlag EthernetEEPROM = {
        "EthernetEEPROM", "", false
    };
} EthernetEEPROM;
} // namespace unions

inline constexpr const auto& EthernetEEPROM = 
    ::gem5::debug::unions::EthernetEEPROM.EthernetEEPROM;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_EthernetEEPROM_HH__
