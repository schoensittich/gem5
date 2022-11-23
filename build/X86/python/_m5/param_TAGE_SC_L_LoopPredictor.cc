/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TAGE_SC_L_LoopPredictor.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/pred/tage_sc_l.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TAGE_SC_L_LoopPredictor");
    py::class_<TAGE_SC_L_LoopPredictorParams, LoopPredictorParams, std::unique_ptr<TAGE_SC_L_LoopPredictorParams, py::nodelete>>(m, "TAGE_SC_L_LoopPredictorParams")
        .def(py::init<>())
        .def("create", &TAGE_SC_L_LoopPredictorParams::create)
        ;

    py::class_<gem5::branch_prediction::TAGE_SC_L_LoopPredictor, gem5::branch_prediction::LoopPredictor, std::unique_ptr<gem5::branch_prediction::TAGE_SC_L_LoopPredictor, py::nodelete>>(m, "gem5_COLONS_branch_prediction_COLONS_TAGE_SC_L_LoopPredictor")
        ;

}

static EmbeddedPyBind embed_obj("TAGE_SC_L_LoopPredictor", module_init, "LoopPredictor");

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
class DummyTAGE_SC_L_LoopPredictorParamsClass
{
  public:
    gem5::branch_prediction::TAGE_SC_L_LoopPredictor *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTAGE_SC_L_LoopPredictorShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTAGE_SC_L_LoopPredictorShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TAGE_SC_L_LoopPredictorParams &>>>
{
  public:
    using Params = TAGE_SC_L_LoopPredictorParams;
    static gem5::branch_prediction::TAGE_SC_L_LoopPredictor *
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
class DummyTAGE_SC_L_LoopPredictorShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TAGE_SC_L_LoopPredictorParams &>>>
{
  public:
    using Params = DummyTAGE_SC_L_LoopPredictorParamsClass;
    static gem5::branch_prediction::TAGE_SC_L_LoopPredictor *
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
[[maybe_unused]] gem5::branch_prediction::TAGE_SC_L_LoopPredictor *
DummyTAGE_SC_L_LoopPredictorShunt<gem5::branch_prediction::TAGE_SC_L_LoopPredictor>::Params::create() const
{
    return DummyTAGE_SC_L_LoopPredictorShunt<gem5::branch_prediction::TAGE_SC_L_LoopPredictor>::create(*this);
}

} // namespace gem5
