/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SBOOEPrefetcher__
#define __PARAMS__SBOOEPrefetcher__

namespace gem5 {
namespace prefetch {
class SBOOE;
} // namespace prefetch
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/QueuedPrefetcher.hh"

namespace gem5
{
struct SBOOEPrefetcherParams
    : public QueuedPrefetcherParams
{
    gem5::prefetch::SBOOE * create() const;
    int latency_buffer_size;
    int sandbox_entries;
    int score_threshold_pct;
    int sequential_prefetchers;
};

} // namespace gem5

#endif // __PARAMS__SBOOEPrefetcher__
