/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__HelloObject__
#define __PARAMS__HelloObject__

namespace gem5 {
class HelloObject;
} // namespace gem5
#include <cstddef>
#include "params/GoodbyeObject.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct HelloObjectParams
    : public SimObjectParams
{
    gem5::HelloObject * create() const;
    gem5::GoodbyeObject * goodbye_object;
    int number_of_fires;
    Tick time_to_wait;
};

} // namespace gem5

#endif // __PARAMS__HelloObject__
