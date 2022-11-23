/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TAGE.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/tage.hh"

#include "cpu/pred/tage_base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TAGE");
    py::class_<TAGEParams, BranchPredictorParams, std::unique_ptr<TAGEParams, py::nodelete>>(m, "TAGEParams")
        .def(py::init<>())
        .def("create", &TAGEParams::create)
        .def_readwrite("tage", &TAGEParams::tage)
        ;

    py::class_<gem5::branch_prediction::TAGE, gem5::branch_prediction::BPredUnit, std::unique_ptr<gem5::branch_prediction::TAGE, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_TAGE")
        ;

}

static EmbeddedPyBind embed_obj("TAGE", module_init, "BranchPredictor");

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
class DummyTAGEParamsClass
{
  public:
    gem5::branch_prediction::TAGE *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTAGEShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTAGEShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TAGEParams &>>>
{
  public:
    using Params = TAGEParams;
    static gem5::branch_prediction::TAGE *
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
class DummyTAGEShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TAGEParams &>>>
{
  public:
    using Params = DummyTAGEParamsClass;
    static gem5::branch_prediction::TAGE *
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
[[maybe_unused]] gem5::branch_prediction::TAGE *
DummyTAGEShunt<gem5::branch_prediction::TAGE>::Params::create() const
{
    return DummyTAGEShunt<gem5::branch_prediction::TAGE>::create(*this);
}

} // namespace gem5
