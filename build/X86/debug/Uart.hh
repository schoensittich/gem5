/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_Uart_HH__
#define __DEBUG_Uart_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union Uart
{
    ~Uart() {}
    SimpleFlag Uart = {
        "Uart", "", false
    };
} Uart;
} // namespace unions

inline constexpr const auto& Uart = 
    ::gem5::debug::unions::Uart.Uart;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_Uart_HH__
