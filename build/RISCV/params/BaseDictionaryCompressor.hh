/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__BaseDictionaryCompressor__
#define __PARAMS__BaseDictionaryCompressor__

namespace gem5 {
namespace compression {
class BaseDictionaryCompressor;
} // namespace compression
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/BaseCacheCompressor.hh"

namespace gem5
{
struct BaseDictionaryCompressorParams
    : public BaseCacheCompressorParams
{
    int dictionary_size;
};

} // namespace gem5

#endif // __PARAMS__BaseDictionaryCompressor__