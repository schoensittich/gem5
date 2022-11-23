/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/RiscvTLB.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/tlb.hh"

#include "arch/riscv/pma_checker.hh"
#include "arch/riscv/pmp.hh"
#include "base/types.hh"
#include "arch/riscv/pagetable_walker.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_RiscvTLB");
    py::class_<RiscvTLBParams, BaseTLBParams, std::unique_ptr<RiscvTLBParams, py::nodelete>>(m, "RiscvTLBParams")
        .def(py::init<>())
        .def("create", &RiscvTLBParams::create)
        .def_readwrite("pma_checker", &RiscvTLBParams::pma_checker)
        .def_readwrite("pmp", &RiscvTLBParams::pmp)
        .def_readwrite("size", &RiscvTLBParams::size)
        .def_readwrite("walker", &RiscvTLBParams::walker)
        ;

    py::class_<gem5::RiscvISA::TLB, gem5::BaseTLB, std::unique_ptr<gem5::RiscvISA::TLB, py::nodelete>>(m, "gem5_COLONS_RiscvISA_COLONS_TLB")
        ;

}

static EmbeddedPyBind embed_obj("RiscvTLB", module_init, "BaseTLB");

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
class DummyRiscvTLBParamsClass
{
  public:
    gem5::RiscvISA::TLB *create() const;
};

template <class CxxClass, class Enable=void>
class DummyRiscvTLBShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyRiscvTLBShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const RiscvTLBParams &>>>
{
  public:
    using Params = RiscvTLBParams;
    static gem5::RiscvISA::TLB *
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
class DummyRiscvTLBShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const RiscvTLBParams &>>>
{
  public:
    using Params = DummyRiscvTLBParamsClass;
    static gem5::RiscvISA::TLB *
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
[[maybe_unused]] gem5::RiscvISA::TLB *
DummyRiscvTLBShunt<gem5::RiscvISA::TLB>::Params::create() const
{
    return DummyRiscvTLBShunt<gem5::RiscvISA::TLB>::create(*this);
}

} // namespace gem5