/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__MRURP__
#define __PARAMS__MRURP__

namespace gem5 {
namespace replacement_policy {
class MRU;
} // namespace replacement_policy
} // namespace gem5

#include "params/BaseReplacementPolicy.hh"

namespace gem5
{
struct MRURPParams
    : public BaseReplacementPolicyParams
{
    gem5::replacement_policy::MRU * create() const;
};

} // namespace gem5

#endif // __PARAMS__MRURP__
