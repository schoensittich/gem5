/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__GUPSGen__
#define __PARAMS__GUPSGen__

namespace gem5 {
class GUPSGen;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/System.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct GUPSGenParams
    : public ClockedObjectParams
{
    gem5::GUPSGen * create() const;
    bool init_memory;
    uint64_t mem_size;
    int request_queue_size;
    Addr start_addr;
    gem5::System * system;
    int update_limit;
    unsigned int port_port_connection_count;
};

} // namespace gem5

#endif // __PARAMS__GUPSGen__