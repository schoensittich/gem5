/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/KernelWorkload.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "sim/kernel_workload.hh"

#include <string>
#include <vector>
#include <string>
#include <vector>
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_KernelWorkload");
    py::class_<KernelWorkloadParams, WorkloadParams, std::unique_ptr<KernelWorkloadParams, py::nodelete>>(m, "KernelWorkloadParams")
        .def(py::init<>())
        .def("create", &KernelWorkloadParams::create)
        .def_readwrite("addr_check", &KernelWorkloadParams::addr_check)
        .def_readwrite("command_line", &KernelWorkloadParams::command_line)
        .def_readwrite("extras", &KernelWorkloadParams::extras)
        .def_readwrite("extras_addrs", &KernelWorkloadParams::extras_addrs)
        .def_readwrite("load_addr_mask", &KernelWorkloadParams::load_addr_mask)
        .def_readwrite("load_addr_offset", &KernelWorkloadParams::load_addr_offset)
        .def_readwrite("object_file", &KernelWorkloadParams::object_file)
        ;

    py::class_<gem5::KernelWorkload, gem5::Workload, std::unique_ptr<gem5::KernelWorkload, py::nodelete>>(m, "gem5_COLONS_KernelWorkload")
        ;

}

static EmbeddedPyBind embed_obj("KernelWorkload", module_init, "Workload");

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
class DummyKernelWorkloadParamsClass
{
  public:
    gem5::KernelWorkload *create() const;
};

template <class CxxClass, class Enable=void>
class DummyKernelWorkloadShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyKernelWorkloadShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const KernelWorkloadParams &>>>
{
  public:
    using Params = KernelWorkloadParams;
    static gem5::KernelWorkload *
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
class DummyKernelWorkloadShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const KernelWorkloadParams &>>>
{
  public:
    using Params = DummyKernelWorkloadParamsClass;
    static gem5::KernelWorkload *
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
[[maybe_unused]] gem5::KernelWorkload *
DummyKernelWorkloadShunt<gem5::KernelWorkload>::Params::create() const
{
    return DummyKernelWorkloadShunt<gem5::KernelWorkload>::create(*this);
}

} // namespace gem5
