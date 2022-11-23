/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:835
 */

#include <cassert>
#include <iostream>
#include <string>

#include "base/logging.hh"
#include "mem/ruby/protocol/CoherenceRequestType.hh"

namespace gem5
{

namespace ruby
{

// Code for output operator
::std::ostream&
operator<<(::std::ostream& out, const CoherenceRequestType& obj)
{
    out << CoherenceRequestType_to_string(obj);
    out << ::std::flush;
    return out;
}

// Code to convert state to a string
std::string
CoherenceRequestType_to_string(const CoherenceRequestType& obj)
{
    switch(obj) {
      case CoherenceRequestType_GETX:
        return "GETX";
      case CoherenceRequestType_UPGRADE:
        return "UPGRADE";
      case CoherenceRequestType_GETS:
        return "GETS";
      case CoherenceRequestType_GET_INSTR:
        return "GET_INSTR";
      case CoherenceRequestType_INV:
        return "INV";
      case CoherenceRequestType_PUTX:
        return "PUTX";
      case CoherenceRequestType_WB_ACK:
        return "WB_ACK";
      case CoherenceRequestType_DMA_READ:
        return "DMA_READ";
      case CoherenceRequestType_DMA_WRITE:
        return "DMA_WRITE";
      default:
        panic("Invalid range for type CoherenceRequestType");
    }
    // Appease the compiler since this function has a return value
    return "";
}

// Code to convert from a string to the enumeration
CoherenceRequestType
string_to_CoherenceRequestType(const std::string& str)
{
    if (str == "GETX") {
        return CoherenceRequestType_GETX;
    } else if (str == "UPGRADE") {
        return CoherenceRequestType_UPGRADE;
    } else if (str == "GETS") {
        return CoherenceRequestType_GETS;
    } else if (str == "GET_INSTR") {
        return CoherenceRequestType_GET_INSTR;
    } else if (str == "INV") {
        return CoherenceRequestType_INV;
    } else if (str == "PUTX") {
        return CoherenceRequestType_PUTX;
    } else if (str == "WB_ACK") {
        return CoherenceRequestType_WB_ACK;
    } else if (str == "DMA_READ") {
        return CoherenceRequestType_DMA_READ;
    } else if (str == "DMA_WRITE") {
        return CoherenceRequestType_DMA_WRITE;
    } else {
        panic("Invalid string conversion for %s, type CoherenceRequestType", str);
    }
}

// Code to increment an enumeration type
CoherenceRequestType&
operator++(CoherenceRequestType& e)
{
    assert(e < CoherenceRequestType_NUM);
    return e = CoherenceRequestType(e+1);
}
} // namespace ruby
} // namespace gem5