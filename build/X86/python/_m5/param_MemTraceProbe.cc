/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MemTraceProbe.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/probes/mem_trace.hh"

#include "sim/system.hh"
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MemTraceProbe");
    py::class_<MemTraceProbeParams, BaseMemProbeParams, std::unique_ptr<MemTraceProbeParams, py::nodelete>>(m, "MemTraceProbeParams")
        .def(py::init<>())
        .def("create", &MemTraceProbeParams::create)
        .def_readwrite("system", &MemTraceProbeParams::system)
        .def_readwrite("trace_compress", &MemTraceProbeParams::trace_compress)
        .def_readwrite("trace_file", &MemTraceProbeParams::trace_file)
        .def_readwrite("with_pc", &MemTraceProbeParams::with_pc)
        ;

    py::class_<gem5::MemTraceProbe, gem5::BaseMemProbe, std::unique_ptr<gem5::MemTraceProbe, py::nodelete>>(m, "gem5_COLONS_MemTraceProbe")
        ;

}

static EmbeddedPyBind embed_obj("MemTraceProbe", module_init, "BaseMemProbe");

} // namespace gem5
namespace gem5
{

namespace
{

/*
 * If we can't define a default create() method for this params
 * struct because the SimObject doesn't have the right
 * constructor, use template magic to make it so we're actually
 * defining a create method for this class instead.
 */
class DummyMemTraceProbeParamsClass
{
  public:
    gem5::MemTraceProbe *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMemTraceProbeShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMemTraceProbeShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MemTraceProbeParams &>>>
{
  public:
    using Params = MemTraceProbeParams;
    static gem5::MemTraceProbe *
    create(const Params &p)
    {
        return new CxxClass(p);
    }
};

/*
 * This version diverts to the DummyParamsClass and a dummy
 * implementation of create if the appropriate constructor does
 * not exist.
 */
template <class CxxClass>
class DummyMemTraceProbeShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MemTraceProbeParams &>>>
{
  public:
    using Params = DummyMemTraceProbeParamsClass;
    static gem5::MemTraceProbe *
    create(const Params &p)
    {
        return nullptr;
    }
};

} // anonymous namespace

/*
 * An implementation of either the real Params struct's create
 * method, or the Dummy one. Either an implementation is
 * mandantory since this was shunted off to the dummy class, or
 * one is optional which will override this weak version.
 */
[[maybe_unused]] gem5::MemTraceProbe *
DummyMemTraceProbeShunt<gem5::MemTraceProbe>::Params::create() const
{
    return DummyMemTraceProbeShunt<gem5::MemTraceProbe>::create(*this);
}

} // namespace gem5
