/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__SHiPPCRP__
#define __PARAMS__SHiPPCRP__

namespace gem5 {
namespace replacement_policy {
class SHiPPC;
} // namespace replacement_policy
} // namespace gem5

#include "params/SHiPRP.hh"

namespace gem5
{
struct SHiPPCRPParams
    : public SHiPRPParams
{
    gem5::replacement_policy::SHiPPC * create() const;
};

} // namespace gem5

#endif // __PARAMS__SHiPPCRP__
