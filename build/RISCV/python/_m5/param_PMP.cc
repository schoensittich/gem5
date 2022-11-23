/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PMP.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "arch/riscv/pmp.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PMP");
    py::class_<PMPParams, SimObjectParams, std::unique_ptr<PMPParams, py::nodelete>>(m, "PMPParams")
        .def(py::init<>())
        .def("create", &PMPParams::create)
        .def_readwrite("pmp_entries", &PMPParams::pmp_entries)
        ;

    py::class_<gem5::PMP, gem5::SimObject, std::unique_ptr<gem5::PMP, py::nodelete>>(m, "gem5_COLONS_PMP")
        ;

}

static EmbeddedPyBind embed_obj("PMP", module_init, "SimObject");

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
class DummyPMPParamsClass
{
  public:
    gem5::PMP *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPMPShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPMPShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PMPParams &>>>
{
  public:
    using Params = PMPParams;
    static gem5::PMP *
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
class DummyPMPShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PMPParams &>>>
{
  public:
    using Params = DummyPMPParamsClass;
    static gem5::PMP *
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
[[maybe_unused]] gem5::PMP *
DummyPMPShunt<gem5::PMP>::Params::create() const
{
    return DummyPMPShunt<gem5::PMP>::create(*this);
}

} // namespace gem5
