/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__LupioRTC__
#define __PARAMS__LupioRTC__

namespace gem5 {
class LupioRTC;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <time.h>

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct LupioRTCParams
    : public BasicPioDeviceParams
{
    gem5::LupioRTC * create() const;
    Addr pio_size;
    tm time;
};

} // namespace gem5

#endif // __PARAMS__LupioRTC__