/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__I8042__
#define __PARAMS__I8042__

namespace gem5 {
namespace X86ISA {
class I8042;
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/PS2Device.hh"
#include <cstddef>
#include "params/PS2Device.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/PioDevice.hh"

namespace gem5
{
struct I8042Params
    : public PioDeviceParams
{
    gem5::X86ISA::I8042 * create() const;
    Addr command_port;
    Addr data_port;
    gem5::ps2::Device * keyboard;
    gem5::ps2::Device * mouse;
    Tick pio_latency;
    unsigned int port_mouse_int_pin_connection_count;
    unsigned int port_keyboard_int_pin_connection_count;
};

} // namespace gem5

#endif // __PARAMS__I8042__
