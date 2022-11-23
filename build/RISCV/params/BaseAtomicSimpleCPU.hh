/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__BaseAtomicSimpleCPU__
#define __PARAMS__BaseAtomicSimpleCPU__

namespace gem5 {
class AtomicSimpleCPU;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/BaseSimpleCPU.hh"

namespace gem5
{
struct BaseAtomicSimpleCPUParams
    : public BaseSimpleCPUParams
{
    gem5::AtomicSimpleCPU * create() const;
    bool simulate_data_stalls;
    bool simulate_inst_stalls;
    int width;
};

} // namespace gem5

#endif // __PARAMS__BaseAtomicSimpleCPU__