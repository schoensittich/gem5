/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86ACPIXSDT__
#define __PARAMS__X86ACPIXSDT__

namespace gem5 {
namespace X86ISA {
namespace ACPI {
class XSDT;
} // namespace ACPI
} // namespace X86ISA
} // namespace gem5
#include <vector>
#include "params/X86ACPISysDescTable.hh"

#include "params/X86ACPISysDescTable.hh"

namespace gem5
{
struct X86ACPIXSDTParams
    : public X86ACPISysDescTableParams
{
    gem5::X86ISA::ACPI::XSDT * create() const;
    std::vector< gem5::X86ISA::ACPI::SysDescTable * > entries;
};

} // namespace gem5

#endif // __PARAMS__X86ACPIXSDT__
