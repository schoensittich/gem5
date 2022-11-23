/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_hh.py:224
 */

#ifndef __PARAMS__InvalidateGenerator__
#define __PARAMS__InvalidateGenerator__

namespace gem5 {
class InvalidateGenerator;
} // namespace gem5
#include <cstddef>
#include "base/types.hh"

#include "params/DirectedGenerator.hh"

namespace gem5
{
struct InvalidateGeneratorParams
    : public DirectedGeneratorParams
{
    gem5::InvalidateGenerator * create() const;
    int addr_increment_size;
};

} // namespace gem5

#endif // __PARAMS__InvalidateGenerator__
