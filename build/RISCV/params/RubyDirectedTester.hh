/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RubyDirectedTester__
#define __PARAMS__RubyDirectedTester__

namespace gem5 {
class RubyDirectedTester;
} // namespace gem5
#include <cstddef>
#include "params/DirectedGenerator.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/ClockedObject.hh"

namespace gem5
{
struct RubyDirectedTesterParams
    : public ClockedObjectParams
{
    gem5::RubyDirectedTester * create() const;
    gem5::DirectedGenerator * generator;
    int requests_to_complete;
    unsigned int port_cpuPort_connection_count;
};

} // namespace gem5

#endif // __PARAMS__RubyDirectedTester__