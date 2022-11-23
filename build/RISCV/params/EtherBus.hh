/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__EtherBus__
#define __PARAMS__EtherBus__

namespace gem5 {
class EtherBus;
} // namespace gem5
#include <cstddef>
#include "params/EtherDump.hh"
#include <cstddef>
#include <cstddef>

#include "params/SimObject.hh"

namespace gem5
{
struct EtherBusParams
    : public SimObjectParams
{
    gem5::EtherBus * create() const;
    gem5::EtherDump * dump;
    bool loopback;
    float speed;
};

} // namespace gem5

#endif // __PARAMS__EtherBus__
