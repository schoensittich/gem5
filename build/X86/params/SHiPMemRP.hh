/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SHiPMemRP__
#define __PARAMS__SHiPMemRP__

namespace gem5 {
namespace replacement_policy {
class SHiPMem;
} // namespace replacement_policy
} // namespace gem5

#include "params/SHiPRP.hh"

namespace gem5
{
struct SHiPMemRPParams
    : public SHiPRPParams
{
    gem5::replacement_policy::SHiPMem * create() const;
};

} // namespace gem5

#endif // __PARAMS__SHiPMemRP__
