/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__ThermalModel__
#define __PARAMS__ThermalModel__

namespace gem5 {
class ThermalModel;
} // namespace gem5
#include <cstddef>

#include "params/ClockedObject.hh"

namespace gem5
{
struct ThermalModelParams
    : public ClockedObjectParams
{
    gem5::ThermalModel * create() const;
    double step;
};

} // namespace gem5

#endif // __PARAMS__ThermalModel__