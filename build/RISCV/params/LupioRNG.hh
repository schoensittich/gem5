/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__LupioRNG__
#define __PARAMS__LupioRNG__

namespace gem5 {
class LupioRNG;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Platform.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct LupioRNGParams
    : public BasicPioDeviceParams
{
    gem5::LupioRNG * create() const;
    int int_id;
    Addr pio_size;
    gem5::Platform * platform;
    int seed;
};

} // namespace gem5

#endif // __PARAMS__LupioRNG__