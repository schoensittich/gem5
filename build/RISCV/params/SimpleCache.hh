/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SimpleCache__
#define __PARAMS__SimpleCache__

namespace gem5 {
class SimpleCache;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct SimpleCacheParams
    : public ClockedObjectParams
{
    gem5::SimpleCache * create() const;
    Cycles latency;
    uint64_t size;
    gem5::System * system;
    unsigned int port_cpu_side_connection_count;
    unsigned int port_mem_side_connection_count;
};

} // namespace gem5

#endif // __PARAMS__SimpleCache__