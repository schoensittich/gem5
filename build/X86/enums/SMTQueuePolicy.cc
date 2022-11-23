/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/enum_cc.py:160
 */

#include "base/compiler.hh"
#include "enums/SMTQueuePolicy.hh"

namespace gem5
{

const char *SMTQueuePolicyStrings[static_cast<int>(SMTQueuePolicy::Num_SMTQueuePolicy)] =
{
    "Dynamic",
    "Partitioned",
    "Threshold",
};
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
    py::module_ m = m_internal.def_submodule("enum_SMTQueuePolicy");

py::enum_<SMTQueuePolicy>(m, "enum_SMTQueuePolicy")
        .value("Dynamic", SMTQueuePolicy::Dynamic)
        .value("Partitioned", SMTQueuePolicy::Partitioned)
        .value("Threshold", SMTQueuePolicy::Threshold)
        .value("Num_SMTQueuePolicy", SMTQueuePolicy::Num_SMTQueuePolicy)
        ;
    }
static EmbeddedPyBind embed_enum("enum_SMTQueuePolicy", module_init);

} // namespace gem5
    
