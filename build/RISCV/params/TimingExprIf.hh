/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__TimingExprIf__
#define __PARAMS__TimingExprIf__

namespace gem5 {
class TimingExprIf;
} // namespace gem5
#include <cstddef>
#include "params/TimingExpr.hh"
#include <cstddef>
#include "params/TimingExpr.hh"
#include <cstddef>
#include "params/TimingExpr.hh"

#include "params/TimingExpr.hh"

namespace gem5
{
struct TimingExprIfParams
    : public TimingExprParams
{
    gem5::TimingExprIf * create() const;
    gem5::TimingExpr * cond;
    gem5::TimingExpr * falseExpr;
    gem5::TimingExpr * trueExpr;
};

} // namespace gem5

#endif // __PARAMS__TimingExprIf__