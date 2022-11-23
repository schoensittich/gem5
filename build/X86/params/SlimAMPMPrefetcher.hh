/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SlimAMPMPrefetcher__
#define __PARAMS__SlimAMPMPrefetcher__

namespace gem5 {
namespace prefetch {
class SlimAMPM;
} // namespace prefetch
} // namespace gem5
#include <cstddef>
#include "params/AccessMapPatternMatching.hh"
#include <cstddef>
#include "params/DeltaCorrelatingPredictionTables.hh"

#include "params/QueuedPrefetcher.hh"

namespace gem5
{
struct SlimAMPMPrefetcherParams
    : public QueuedPrefetcherParams
{
    gem5::prefetch::SlimAMPM * create() const;
    gem5::prefetch::AccessMapPatternMatching * ampm;
    gem5::prefetch::DeltaCorrelatingPredictionTables * dcpt;
};

} // namespace gem5

#endif // __PARAMS__SlimAMPMPrefetcher__
