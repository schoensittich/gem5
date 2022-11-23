/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__QoSFixedPriorityPolicy__
#define __PARAMS__QoSFixedPriorityPolicy__

namespace gem5 {
namespace memory {
namespace qos {
class FixedPriorityPolicy;
} // namespace qos
} // namespace memory
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/QoSPolicy.hh"

namespace gem5
{
struct QoSFixedPriorityPolicyParams
    : public QoSPolicyParams
{
    gem5::memory::qos::FixedPriorityPolicy * create() const;
    uint8_t qos_fixed_prio_default_prio;
};

} // namespace gem5

#endif // __PARAMS__QoSFixedPriorityPolicy__
