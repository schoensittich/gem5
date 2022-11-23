/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__Root__
#define __PARAMS__Root__

namespace gem5 {
class Root;
} // namespace gem5
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct RootParams
    : public SimObjectParams
{
    gem5::Root * create() const;
    bool full_system;
    Tick sim_quantum;
    bool time_sync_enable;
    Tick time_sync_period;
    Tick time_sync_spin_threshold;
};

} // namespace gem5

#endif // __PARAMS__Root__
