/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__LocalBP__
#define __PARAMS__LocalBP__

namespace gem5 {
namespace branch_prediction {
class LocalBP;
} // namespace branch_prediction
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/BranchPredictor.hh"

namespace gem5
{
struct LocalBPParams
    : public BranchPredictorParams
{
    gem5::branch_prediction::LocalBP * create() const;
    unsigned localCtrBits;
    unsigned localPredictorSize;
};

} // namespace gem5

#endif // __PARAMS__LocalBP__
