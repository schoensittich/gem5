/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:453
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/DMAResponseMsg.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
DMAResponseMsg::print(std::ostream& out) const
{
    out << "[DMAResponseMsg: ";
    out << "Type = " << m_Type << " ";
    out << "PhysicalAddress = " << printAddress(m_PhysicalAddress) << " ";
    out << "LineAddress = " << printAddress(m_LineAddress) << " ";
    out << "Destination = " << m_Destination << " ";
    out << "DataBlk = " << m_DataBlk << " ";
    out << "MessageSize = " << m_MessageSize << " ";
    out << "]";
}
bool
DMAResponseMsg::functionalRead(Packet* param_pkt)
{
return (testAndRead(m_LineAddress, m_DataBlk, param_pkt));

}
bool
DMAResponseMsg::functionalWrite(Packet* param_pkt)
{
return (testAndWrite(m_LineAddress, m_DataBlk, param_pkt));

}
} // namespace ruby
} // namespace gem5
