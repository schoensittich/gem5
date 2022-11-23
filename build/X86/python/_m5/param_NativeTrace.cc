/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/NativeTrace.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/nativetrace.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_NativeTrace");
    py::class_<NativeTraceParams, ExeTracerParams, std::unique_ptr<NativeTraceParams, py::nodelete>>(m, "NativeTraceParams")
        ;

    py::class_<gem5::Trace::NativeTrace, gem5::Trace::ExeTracer, std::unique_ptr<gem5::Trace::NativeTrace, py::nodelete>>(m, "gem5_COLONS_Trace_COLONS_NativeTrace")
        ;

}

static EmbeddedPyBind embed_obj("NativeTrace", module_init, "ExeTracer");

} // namespace gem5
