/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__TimingExprBin__
#define __PARAMS__TimingExprBin__

namespace gem5 {
class TimingExprBin;
} // namespace gem5
#include <cstddef>
#include "params/TimingExpr.hh"
#include <cstddef>
#include "enums/TimingExprOp.hh"
#include <cstddef>
#include "params/TimingExpr.hh"

#include "params/TimingExpr.hh"

#include "enums/TimingExprOp.hh"

namespace gem5
{
struct TimingExprBinParams
    : public TimingExprParams
{
    gem5::TimingExprBin * create() const;
    gem5::TimingExpr * left;
    enums::TimingExprOp op;
    gem5::TimingExpr * right;
};

} // namespace gem5

#endif // __PARAMS__TimingExprBin__