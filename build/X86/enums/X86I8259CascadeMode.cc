/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:160
 */

#include "base/compiler.hh"
#include "enums/X86I8259CascadeMode.hh"

namespace gem5
{

GEM5_DEPRECATED_NAMESPACE(Enums, enums);
namespace enums
{
    const char *X86I8259CascadeModeStrings[Num_X86I8259CascadeMode] =
    {
        "I8259Master",
        "I8259Single",
        "I8259Slave",
    };
} // namespace enums
} // namespace gem5
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <sim/init.hh>

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
    py::module_ m = m_internal.def_submodule("enum_X86I8259CascadeMode");

py::enum_<enums::X86I8259CascadeMode>(m, "enum_X86I8259CascadeMode")
        .value("I8259Master", enums::I8259Master)
        .value("I8259Single", enums::I8259Single)
        .value("I8259Slave", enums::I8259Slave)
        .value("Num_X86I8259CascadeMode", enums::Num_X86I8259CascadeMode)
        .export_values()
        ;
    }
static EmbeddedPyBind embed_enum("enum_X86I8259CascadeMode", module_init);

} // namespace gem5
    
