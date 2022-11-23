/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RiscvLinux.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/linux/fs_workload.hh"

#include "base/types.hh"
#include <string>
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RiscvLinux");
    py::class_<RiscvLinuxParams, KernelWorkloadParams, std::unique_ptr<RiscvLinuxParams, py::nodelete>>(m, "RiscvLinuxParams")
        .def(py::init<>())
        .def("create", &RiscvLinuxParams::create)
        .def_readwrite("dtb_addr", &RiscvLinuxParams::dtb_addr)
        .def_readwrite("dtb_filename", &RiscvLinuxParams::dtb_filename)
        ;

    py::class_<gem5::RiscvISA::FsLinux, gem5::KernelWorkload, std::unique_ptr<gem5::RiscvISA::FsLinux, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_FsLinux")
        ;

}

static EmbeddedPyBind embed_obj("RiscvLinux", module_init, "KernelWorkload");

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
class DummyRiscvLinuxParamsClass
{
  public:
    gem5::RiscvISA::FsLinux *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRiscvLinuxShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRiscvLinuxShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RiscvLinuxParams &>>>
{
  public:
    using Params = RiscvLinuxParams;
    static gem5::RiscvISA::FsLinux *
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
class DummyRiscvLinuxShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RiscvLinuxParams &>>>
{
  public:
    using Params = DummyRiscvLinuxParamsClass;
    static gem5::RiscvISA::FsLinux *
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
[[maybe_unused]] gem5::RiscvISA::FsLinux *
DummyRiscvLinuxShunt<gem5::RiscvISA::FsLinux>::Params::create() const
{
    return DummyRiscvLinuxShunt<gem5::RiscvISA::FsLinux>::create(*this);
}

} // namespace gem5
