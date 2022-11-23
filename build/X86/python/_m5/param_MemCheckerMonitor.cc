/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MemCheckerMonitor.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/mem_checker_monitor.hh"

#include "mem/mem_checker.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MemCheckerMonitor");
    py::class_<MemCheckerMonitorParams, SimObjectParams, std::unique_ptr<MemCheckerMonitorParams, py::nodelete>>(m, "MemCheckerMonitorParams")
        .def(py::init<>())
        .def("create", &MemCheckerMonitorParams::create)
        .def_readwrite("memchecker", &MemCheckerMonitorParams::memchecker)
        .def_readwrite("warn_only", &MemCheckerMonitorParams::warn_only)
        .def_readwrite("port_mem_side_port_connection_count", &MemCheckerMonitorParams::port_mem_side_port_connection_count)
        .def_readwrite("port_cpu_side_port_connection_count", &MemCheckerMonitorParams::port_cpu_side_port_connection_count)
        ;

    py::class_<gem5::MemCheckerMonitor, gem5::SimObject, std::unique_ptr<gem5::MemCheckerMonitor, py::nodelete>>(m, "gem5_COLONS_MemCheckerMonitor")
        ;

}

static EmbeddedPyBind embed_obj("MemCheckerMonitor", module_init, "SimObject");

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
class DummyMemCheckerMonitorParamsClass
{
  public:
    gem5::MemCheckerMonitor *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMemCheckerMonitorShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMemCheckerMonitorShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MemCheckerMonitorParams &>>>
{
  public:
    using Params = MemCheckerMonitorParams;
    static gem5::MemCheckerMonitor *
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
class DummyMemCheckerMonitorShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MemCheckerMonitorParams &>>>
{
  public:
    using Params = DummyMemCheckerMonitorParamsClass;
    static gem5::MemCheckerMonitor *
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
[[maybe_unused]] gem5::MemCheckerMonitor *
DummyMemCheckerMonitorShunt<gem5::MemCheckerMonitor>::Params::create() const
{
    return DummyMemCheckerMonitorShunt<gem5::MemCheckerMonitor>::create(*this);
}

} // namespace gem5
