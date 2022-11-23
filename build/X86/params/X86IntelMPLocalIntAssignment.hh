/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86IntelMPLocalIntAssignment__
#define __PARAMS__X86IntelMPLocalIntAssignment__

namespace gem5 {
namespace X86ISA {
namespace intelmp {
class LocalIntAssignment;
} // namespace intelmp
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/X86IntelMPInterruptType.hh"
#include <cstddef>
#include "enums/X86IntelMPPolarity.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/X86IntelMPTriggerMode.hh"

#include "params/X86IntelMPBaseConfigEntry.hh"

#include "enums/X86IntelMPInterruptType.hh"

#include "enums/X86IntelMPPolarity.hh"

#include "enums/X86IntelMPTriggerMode.hh"

namespace gem5
{
struct X86IntelMPLocalIntAssignmentParams
    : public X86IntelMPBaseConfigEntryParams
{
    gem5::X86ISA::intelmp::LocalIntAssignment * create() const;
    uint8_t dest_local_apic_id;
    uint8_t dest_local_apic_intin;
    enums::X86IntelMPInterruptType interrupt_type;
    enums::X86IntelMPPolarity polarity;
    uint8_t source_bus_id;
    uint8_t source_bus_irq;
    enums::X86IntelMPTriggerMode trigger;
};

} // namespace gem5

#endif // __PARAMS__X86IntelMPLocalIntAssignment__
