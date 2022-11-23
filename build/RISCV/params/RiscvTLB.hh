/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__RiscvTLB__
#define __PARAMS__RiscvTLB__

namespace gem5 {
namespace RiscvISA {
class TLB;
} // namespace RiscvISA
} // namespace gem5
#include <cstddef>
#include "params/PMAChecker.hh"
#include <cstddef>
#include "params/PMP.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/RiscvPagetableWalker.hh"

#include "params/BaseTLB.hh"

namespace gem5
{
struct RiscvTLBParams
    : public BaseTLBParams
{
    gem5::RiscvISA::TLB * create() const;
    gem5::PMAChecker * pma_checker;
    gem5::PMP * pmp;
    int size;
    gem5::RiscvISA::Walker * walker;
};

} // namespace gem5

#endif // __PARAMS__RiscvTLB__
