/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86E820Table__
#define __PARAMS__X86E820Table__

namespace gem5 {
namespace X86ISA {
class E820Table;
} // namespace X86ISA
} // namespace gem5
#include <vector>
#include "params/X86E820Entry.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct X86E820TableParams
    : public SimObjectParams
{
    gem5::X86ISA::E820Table * create() const;
    std::vector< gem5::X86ISA::E820Entry * > entries;
};

} // namespace gem5

#endif // __PARAMS__X86E820Table__
