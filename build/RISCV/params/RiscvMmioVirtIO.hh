/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RiscvMmioVirtIO__
#define __PARAMS__RiscvMmioVirtIO__

namespace gem5 {
namespace RiscvISA {
class MmioVirtIO;
} // namespace RiscvISA
} // namespace gem5
#include <cstddef>
#include "params/VirtIODeviceBase.hh"

#include "params/PlicIntDevice.hh"

namespace gem5
{
struct RiscvMmioVirtIOParams
    : public PlicIntDeviceParams
{
    gem5::RiscvISA::MmioVirtIO * create() const;
    gem5::VirtIODeviceBase * vio;
};

} // namespace gem5

#endif // __PARAMS__RiscvMmioVirtIO__