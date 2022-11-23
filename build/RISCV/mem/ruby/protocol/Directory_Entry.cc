/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:453
 */

#include <iostream>
#include <memory>

#include "mem/ruby/protocol/Directory_Entry.hh"
#include "mem/ruby/system/RubySystem.hh"

namespace gem5
{

namespace ruby
{

/** \brief Print the state of this object */
void
Directory_Entry::print(std::ostream& out) const
{
    out << "[Directory_Entry: ";
    out << "DirectoryState = " << m_DirectoryState << " ";
    out << "Sharers = " << m_Sharers << " ";
    out << "Owner = " << m_Owner << " ";
    out << "]";
}
} // namespace ruby
} // namespace gem5