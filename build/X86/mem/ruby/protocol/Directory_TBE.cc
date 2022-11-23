/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:453
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/Directory_TBE.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
Directory_TBE::print(std::ostream& out) const
{
    out << "[Directory_TBE: ";
    out << "PhysicalAddress = " << printAddress(m_PhysicalAddress) << " ";
    out << "TBEState = " << m_TBEState << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "Len = " << m_Len << " ";
    out << "Requestor = " << m_Requestor << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5