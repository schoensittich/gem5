/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/debugflaghh.py:127
 */

#ifndef __DEBUG_VIOBlock_HH__
#define __DEBUG_VIOBlock_HH__

#include "base/compiler.hh" // For namespace deprecation
#include "base/debug.hh"
namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Debug, debug);
namespace debug
{

namespace unions
{
inline union VIOBlock
{
    ~VIOBlock() {}
    SimpleFlag VIOBlock = {
        "VIOBlock", "VirtIO block device", false
    };
} VIOBlock;
} // namespace unions

inline constexpr const auto& VIOBlock = 
    ::gem5::debug::unions::VIOBlock.VIOBlock;

} // namespace debug
} // namespace gem5

#endif // __DEBUG_VIOBlock_HH__