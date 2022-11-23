/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RubySequencer__
#define __PARAMS__RubySequencer__

namespace gem5 {
namespace ruby {
class Sequencer;
} // namespace ruby
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/RubyCache.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"

#include "params/RubyPort.hh"

namespace gem5
{
struct RubySequencerParams
    : public RubyPortParams
{
    gem5::ruby::Sequencer * create() const;
    int coreid;
    gem5::ruby::CacheMemory * dcache;
    Cycles deadlock_threshold;
    bool garnet_standalone;
    int max_outstanding_requests;
};

} // namespace gem5

#endif // __PARAMS__RubySequencer__