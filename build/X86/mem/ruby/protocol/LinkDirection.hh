/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/Type.py:575
 */

#ifndef __LinkDirection_HH__
#define __LinkDirection_HH__

#include <iostream>
#include <string>

namespace gem5
{

namespace ruby
{


// Class definition
/** \enum LinkDirection
 *  \brief ...
 */
enum LinkDirection {
    LinkDirection_FIRST,
    LinkDirection_In = LinkDirection_FIRST, /**< Inward link direction */
    LinkDirection_Out, /**< Outward link direction */
    LinkDirection_NUM
};

// Code to convert from a string to the enumeration
LinkDirection string_to_LinkDirection(const ::std::string& str);

// Code to convert state to a string
::std::string LinkDirection_to_string(const LinkDirection& obj);

// Code to increment an enumeration type
LinkDirection &operator++(LinkDirection &e);

::std::ostream&
operator<<(::std::ostream& out, const LinkDirection& obj);

} // namespace ruby
} // namespace gem5
#endif // __LinkDirection_HH__
