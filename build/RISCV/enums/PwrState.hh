/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_hh.py:116
 */

#ifndef __ENUM__enums__PwrState__
#define __ENUM__enums__PwrState__

namespace gem5
{
namespace enums {
enum PwrState
{
        UNDEFINED = 0,
        ON = 1,
        CLK_GATED = 2,
        SRAM_RETENTION = 3,
        OFF = 4,
        Num_PwrState = 5
    };
    extern const char *PwrStateStrings[Num_PwrState];
}; // enums

} // namespace gem5

#endif // __ENUM__enums__PwrState__
