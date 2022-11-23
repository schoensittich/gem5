/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SrcClockDomain__
#define __PARAMS__SrcClockDomain__

namespace gem5 {
class SrcClockDomain;
} // namespace gem5
#include <vector>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/VoltageDomain.hh"

#include "params/ClockDomain.hh"

namespace gem5
{
struct SrcClockDomainParams
    : public ClockDomainParams
{
    gem5::SrcClockDomain * create() const;
    std::vector< Tick > clock;
    int32_t domain_id;
    uint32_t init_perf_level;
    gem5::VoltageDomain * voltage_domain;
};

} // namespace gem5

#endif // __PARAMS__SrcClockDomain__
