/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86ACPIRSDP__
#define __PARAMS__X86ACPIRSDP__

namespace gem5 {
namespace X86ISA {
namespace ACPI {
class RSDP;
} // namespace ACPI
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "params/X86ACPIRSDT.hh"
#include <cstddef>
#include "params/X86ACPIXSDT.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct X86ACPIRSDPParams
    : public SimObjectParams
{
    gem5::X86ISA::ACPI::RSDP * create() const;
    std::string oem_id;
    uint8_t revision;
    gem5::X86ISA::ACPI::RSDT * rsdt;
    gem5::X86ISA::ACPI::XSDT * xsdt;
};

} // namespace gem5

#endif // __PARAMS__X86ACPIRSDP__
