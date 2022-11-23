/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86FsLinux.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/linux/fs_workload.hh"

#include "arch/x86/bios/e820.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86FsLinux");
    py::class_<X86FsLinuxParams, X86FsWorkloadParams, std::unique_ptr<X86FsLinuxParams, py::nodelete>>(m, "X86FsLinuxParams")
        .def(py::init<>())
        .def("create", &X86FsLinuxParams::create)
        .def_readwrite("e820_table", &X86FsLinuxParams::e820_table)
        ;

    py::class_<gem5::X86ISA::FsLinux, gem5::X86ISA::FsWorkload, std::unique_ptr<gem5::X86ISA::FsLinux, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_FsLinux")
        ;

}

static EmbeddedPyBind embed_obj("X86FsLinux", module_init, "X86FsWorkload");

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
class DummyX86FsLinuxParamsClass
{
  public:
    gem5::X86ISA::FsLinux *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86FsLinuxShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86FsLinuxShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86FsLinuxParams &>>>
{
  public:
    using Params = X86FsLinuxParams;
    static gem5::X86ISA::FsLinux *
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
class DummyX86FsLinuxShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86FsLinuxParams &>>>
{
  public:
    using Params = DummyX86FsLinuxParamsClass;
    static gem5::X86ISA::FsLinux *
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
[[maybe_unused]] gem5::X86ISA::FsLinux *
DummyX86FsLinuxShunt<gem5::X86ISA::FsLinux>::Params::create() const
{
    return DummyX86FsLinuxShunt<gem5::X86ISA::FsLinux>::create(*this);
}

} // namespace gem5
