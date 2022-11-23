/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86IntelMPConfigTable__
#define __PARAMS__X86IntelMPConfigTable__

namespace gem5 {
namespace X86ISA {
namespace intelmp {
class ConfigTable;
} // namespace intelmp
} // namespace X86ISA
} // namespace gem5
#include <vector>
#include "params/X86IntelMPBaseConfigEntry.hh"
#include <vector>
#include "params/X86IntelMPExtConfigEntry.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include <string>
#include <cstddef>
#include "base/types.hh"

#include "params/SimObject.hh"

namespace gem5
{
struct X86IntelMPConfigTableParams
    : public SimObjectParams
{
    gem5::X86ISA::intelmp::ConfigTable * create() const;
    std::vector< gem5::X86ISA::intelmp::BaseConfigEntry * > base_entries;
    std::vector< gem5::X86ISA::intelmp::ExtConfigEntry * > ext_entries;
    uint32_t local_apic;
    std::string oem_id;
    uint32_t oem_table_addr;
    uint16_t oem_table_size;
    std::string product_id;
    uint8_t spec_rev;
};

} // namespace gem5

#endif // __PARAMS__X86IntelMPConfigTable__