/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:575
 */

#ifndef __SequencerStatus_HH__
#define __SequencerStatus_HH__

#include <iostream>
#include <string>

namespace gem5
{

namespace ruby
{


// Class definition
/** \enum SequencerStatus
 *  \brief ...
 */
enum SequencerStatus {
    SequencerStatus_FIRST,
    SequencerStatus_Idle = SequencerStatus_FIRST, /**< Idle */
    SequencerStatus_Pending, /**< Pending */
    SequencerStatus_NUM
};

// Code to convert from a string to the enumeration
SequencerStatus string_to_SequencerStatus(const ::std::string& str);

// Code to convert state to a string
::std::string SequencerStatus_to_string(const SequencerStatus& obj);

// Code to increment an enumeration type
SequencerStatus &operator++(SequencerStatus &e);

::std::ostream&
operator<<(::std::ostream& out, const SequencerStatus& obj);

} // namespace ruby
} // namespace gem5
#endif // __SequencerStatus_HH__
