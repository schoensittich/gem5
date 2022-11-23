/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:453
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/L2Cache_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
L2Cache_TBE::print(std::ostream& out) const
{
    out << "[L2Cache_TBE: ";
    out << "addr = " << printAddress(m_addr) << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Dirty = " << m_Dirty << " ";
    out << "L1_GetS_IDs = " << m_L1_GetS_IDs << " ";
    out << "L1_GetX_ID = " << m_L1_GetX_ID << " ";
    out << "pendingAcks = " << m_pendingAcks << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5
