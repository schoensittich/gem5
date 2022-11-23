/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__X86IntelMPAddrSpaceMapping__
#define __PARAMS__X86IntelMPAddrSpaceMapping__

namespace gem5 {
namespace X86ISA {
namespace intelmp {
class AddrSpaceMapping;
} // namespace intelmp
} // namespace X86ISA
} // namespace gem5
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "enums/X86IntelMPAddressType.hh"
#include <cstddef>
#include "base/types.hh"
#include <cstddef>
#include "base/types.hh"

#include "params/X86IntelMPExtConfigEntry.hh"

#include "enums/X86IntelMPAddressType.hh"

namespace gem5
{
struct X86IntelMPAddrSpaceMappingParams
    : public X86IntelMPExtConfigEntryParams
{
    gem5::X86ISA::intelmp::AddrSpaceMapping * create() const;
    Addr address;
    enums::X86IntelMPAddressType address_type;
    uint8_t bus_id;
    uint64_t length;
};

} // namespace gem5

#endif // __PARAMS__X86IntelMPAddrSpaceMapping__
