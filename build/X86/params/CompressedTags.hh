/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__CompressedTags__
#define __PARAMS__CompressedTags__

namespace gem5 {
class CompressedTags;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/SectorTags.hh"

namespace gem5
{
struct CompressedTagsParams
    : public SectorTagsParams
{
    gem5::CompressedTags * create() const;
    int max_compression_ratio;
};

} // namespace gem5

#endif // __PARAMS__CompressedTags__
