/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RiscvBareMetal__
#define __PARAMS__RiscvBareMetal__

namespace gem5 {
namespace RiscvISA {
class BareMetal;
} // namespace RiscvISA
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"

#include "params/Workload.hh"

namespace gem5
{
struct RiscvBareMetalParams
    : public WorkloadParams
{
    gem5::RiscvISA::BareMetal * create() const;
    bool bare_metal;
    std::string bootloader;
    Addr reset_vect;
};

} // namespace gem5

#endif // __PARAMS__RiscvBareMetal__
