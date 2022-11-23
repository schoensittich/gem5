/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/NVMInterface.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/nvm_interface.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_NVMInterface");
    py::class_<NVMInterfaceParams, MemInterfaceParams, std::unique_ptr<NVMInterfaceParams, py::nodelete>>(m, "NVMInterfaceParams")
        .def(py::init<>())
        .def("create", &NVMInterfaceParams::create)
        .def_readwrite("max_pending_reads", &NVMInterfaceParams::max_pending_reads)
        .def_readwrite("max_pending_writes", &NVMInterfaceParams::max_pending_writes)
        .def_readwrite("tREAD", &NVMInterfaceParams::tREAD)
        .def_readwrite("tSEND", &NVMInterfaceParams::tSEND)
        .def_readwrite("tWRITE", &NVMInterfaceParams::tWRITE)
        .def_readwrite("two_cycle_rdwr", &NVMInterfaceParams::two_cycle_rdwr)
        ;

    py::class_<gem5::memory::NVMInterface, gem5::memory::MemInterface, std::unique_ptr<gem5::memory::NVMInterface, py::nodelete>>(m, "gem5_COLONS_memory_COLONS_NVMInterface")
        ;

}

static EmbeddedPyBind embed_obj("NVMInterface", module_init, "MemInterface");

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
class DummyNVMInterfaceParamsClass
{
  public:
    gem5::memory::NVMInterface *create() const;
};

template <class CxxClass, class Enable=void>
class DummyNVMInterfaceShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyNVMInterfaceShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const NVMInterfaceParams &>>>
{
  public:
    using Params = NVMInterfaceParams;
    static gem5::memory::NVMInterface *
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
class DummyNVMInterfaceShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const NVMInterfaceParams &>>>
{
  public:
    using Params = DummyNVMInterfaceParamsClass;
    static gem5::memory::NVMInterface *
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
[[maybe_unused]] gem5::memory::NVMInterface *
DummyNVMInterfaceShunt<gem5::memory::NVMInterface>::Params::create() const
{
    return DummyNVMInterfaceShunt<gem5::memory::NVMInterface>::create(*this);
}

} // namespace gem5
