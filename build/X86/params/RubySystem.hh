/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RubySystem__
#define __PARAMS__RubySystem__

namespace gem5 {
namespace ruby {
class RubySystem;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/SimpleMemory.hh"
#include <cstddef>
#include <cstddef>
#include "params/System.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct RubySystemParams
    : public ClockedObjectParams
{
    gem5::ruby::RubySystem * create() const;
    bool access_backing_store;
    bool all_instructions;
    uint32_t block_size_bytes;
    bool hot_lines;
    uint32_t memory_size_bits;
    int num_of_sequencers;
    unsigned number_of_virtual_networks;
    gem5::memory::SimpleMemory * phys_mem;
    bool randomization;
    gem5::System * system;
};

} // namespace gem5

#endif // __PARAMS__RubySystem__