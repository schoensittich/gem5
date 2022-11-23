/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__BaseTags__
#define __PARAMS__BaseTags__

namespace gem5 {
class BaseTags;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/BaseIndexingPolicy.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct BaseTagsParams
    : public ClockedObjectParams
{
    int block_size;
    int entry_size;
    gem5::BaseIndexingPolicy * indexing_policy;
    bool sequential_access;
    uint64_t size;
    gem5::System * system;
    Cycles tag_latency;
    int warmup_percentage;
};

} // namespace gem5

#endif // __PARAMS__BaseTags__
