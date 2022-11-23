/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__LupioTTY__
#define __PARAMS__LupioTTY__

namespace gem5 {
class LupioTTY;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/Platform.hh"
#include <cstddef>
#include "params/SerialDevice.hh"

#include "params/BasicPioDevice.hh"

namespace gem5
{
struct LupioTTYParams
    : public BasicPioDeviceParams
{
    gem5::LupioTTY * create() const;
    int int_id;
    Addr pio_size;
    gem5::Platform * platform;
    gem5::SerialDevice * terminal;
};

} // namespace gem5

#endif // __PARAMS__LupioTTY__