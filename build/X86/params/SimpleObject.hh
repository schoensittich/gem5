/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SimpleObject__
#define __PARAMS__SimpleObject__

namespace gem5 {
class SimpleObject;
} // namespace gem5

#include "params/SimObject.hh"

namespace gem5
{
struct SimpleObjectParams
    : public SimObjectParams
{
    gem5::SimpleObject * create() const;
};

} // namespace gem5

#endif // __PARAMS__SimpleObject__
