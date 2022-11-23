/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__EtherSwitch__
#define __PARAMS__EtherSwitch__

namespace gem5 {
class EtherSwitch;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/EtherDump.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct EtherSwitchParams
    : public SimObjectParams
{
    gem5::EtherSwitch * create() const;
    Tick delay;
    Tick delay_var;
    gem5::EtherDump * dump;
    float fabric_speed;
    uint64_t output_buffer_size;
    Tick time_to_live;
    unsigned int port_interface_connection_count;
};

} // namespace gem5

#endif // __PARAMS__EtherSwitch__
