/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_QemuFwCfgVerbose_HH__
#define __DEBUG_QemuFwCfgVerbose_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union QemuFwCfgVerbose
{
    ~QemuFwCfgVerbose() {}
    SimpleFlag QemuFwCfgVerbose = {
        "QemuFwCfgVerbose", "", false
    };
} QemuFwCfgVerbose;
} // namespace unions

inline constexpr const auto& QemuFwCfgVerbose = 
    ::gem5::debug::unions::QemuFwCfgVerbose.QemuFwCfgVerbose;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_QemuFwCfgVerbose_HH__