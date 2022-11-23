/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/X86IntelMPConfigTable.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/x86/bios/intelmp.hh"

#include <vector>
#include "arch/x86/bios/intelmp.hh"
#include <vector>
#include "arch/x86/bios/intelmp.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
#include "base/types.hh"
#include <string>
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_X86IntelMPConfigTable");
    py::class_<X86IntelMPConfigTableParams, SimObjectParams, std::unique_ptr<X86IntelMPConfigTableParams, py::nodelete>>(m, "X86IntelMPConfigTableParams")
        .def(py::init<>())
        .def("create", &X86IntelMPConfigTableParams::create)
        .def_readwrite("base_entries", &X86IntelMPConfigTableParams::base_entries)
        .def_readwrite("ext_entries", &X86IntelMPConfigTableParams::ext_entries)
        .def_readwrite("local_apic", &X86IntelMPConfigTableParams::local_apic)
        .def_readwrite("oem_id", &X86IntelMPConfigTableParams::oem_id)
        .def_readwrite("oem_table_addr", &X86IntelMPConfigTableParams::oem_table_addr)
        .def_readwrite("oem_table_size", &X86IntelMPConfigTableParams::oem_table_size)
        .def_readwrite("product_id", &X86IntelMPConfigTableParams::product_id)
        .def_readwrite("spec_rev", &X86IntelMPConfigTableParams::spec_rev)
        ;

    py::class_<gem5::X86ISA::intelmp::ConfigTable, gem5::SimObject, std::unique_ptr<gem5::X86ISA::intelmp::ConfigTable, py::nodelete>>(m, "gem5_COLONS_X86ISA_COLONS_intelmp_COLONS_ConfigTable")
        ;

}

static EmbeddedPyBind embed_obj("X86IntelMPConfigTable", module_init, "SimObject");

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
class DummyX86IntelMPConfigTableParamsClass
{
  public:
    gem5::X86ISA::intelmp::ConfigTable *create() const;
};

template <class CxxClass, class Enable=void>
class DummyX86IntelMPConfigTableShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyX86IntelMPConfigTableShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const X86IntelMPConfigTableParams &>>>
{
  public:
    using Params = X86IntelMPConfigTableParams;
    static gem5::X86ISA::intelmp::ConfigTable *
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
class DummyX86IntelMPConfigTableShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const X86IntelMPConfigTableParams &>>>
{
  public:
    using Params = DummyX86IntelMPConfigTableParamsClass;
    static gem5::X86ISA::intelmp::ConfigTable *
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
[[maybe_unused]] gem5::X86ISA::intelmp::ConfigTable *
DummyX86IntelMPConfigTableShunt<gem5::X86ISA::intelmp::ConfigTable>::Params::create() const
{
    return DummyX86IntelMPConfigTableShunt<gem5::X86ISA::intelmp::ConfigTable>::create(*this);
}

} // namespace gem5
