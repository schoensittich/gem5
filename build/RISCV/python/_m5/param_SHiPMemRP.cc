/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SHiPMemRP.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/replacement_policies/ship_rp.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SHiPMemRP");
    py::class_<SHiPMemRPParams, SHiPRPParams, std::unique_ptr<SHiPMemRPParams, py::nodelete>>(m, "SHiPMemRPParams")
        .def(py::init<>())
        .def("create", &SHiPMemRPParams::create)
        ;

    py::class_<gem5::replacement_policy::SHiPMem, gem5::replacement_policy::SHiP, std::unique_ptr<gem5::replacement_policy::SHiPMem, py::nodelete>>(m, "gem5_COLONS_replacement_policy_COLONS_SHiPMem")
        ;

}

static EmbeddedPyBind embed_obj("SHiPMemRP", module_init, "SHiPRP");

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
class DummySHiPMemRPParamsClass
{
  public:
    gem5::replacement_policy::SHiPMem *create() const;
};

template <class CxxClass, class Enable=void>
class DummySHiPMemRPShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySHiPMemRPShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SHiPMemRPParams &>>>
{
  public:
    using Params = SHiPMemRPParams;
    static gem5::replacement_policy::SHiPMem *
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
class DummySHiPMemRPShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SHiPMemRPParams &>>>
{
  public:
    using Params = DummySHiPMemRPParamsClass;
    static gem5::replacement_policy::SHiPMem *
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
[[maybe_unused]] gem5::replacement_policy::SHiPMem *
DummySHiPMemRPShunt<gem5::replacement_policy::SHiPMem>::Params::create() const
{
    return DummySHiPMemRPShunt<gem5::replacement_policy::SHiPMem>::create(*this);
}

} // namespace gem5
