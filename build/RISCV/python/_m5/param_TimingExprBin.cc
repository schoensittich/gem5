/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TimingExprBin.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/timing_expr.hh"

#include "cpu/timing_expr.hh"
#include "enums/TimingExprOp.hh"
#include "cpu/timing_expr.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TimingExprBin");
    py::class_<TimingExprBinParams, TimingExprParams, std::unique_ptr<TimingExprBinParams, py::nodelete>>(m, "TimingExprBinParams")
        .def(py::init<>())
        .def("create", &TimingExprBinParams::create)
        .def_readwrite("left", &TimingExprBinParams::left)
        .def_readwrite("op", &TimingExprBinParams::op)
        .def_readwrite("right", &TimingExprBinParams::right)
        ;

    py::class_<gem5::TimingExprBin, gem5::TimingExpr, std::unique_ptr<gem5::TimingExprBin, py::nodelete>>(m, "gem5_COLONS_TimingExprBin")
        ;

}

static EmbeddedPyBind embed_obj("TimingExprBin", module_init, "TimingExpr");

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
class DummyTimingExprBinParamsClass
{
  public:
    gem5::TimingExprBin *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTimingExprBinShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTimingExprBinShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TimingExprBinParams &>>>
{
  public:
    using Params = TimingExprBinParams;
    static gem5::TimingExprBin *
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
class DummyTimingExprBinShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TimingExprBinParams &>>>
{
  public:
    using Params = DummyTimingExprBinParamsClass;
    static gem5::TimingExprBin *
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
[[maybe_unused]] gem5::TimingExprBin *
DummyTimingExprBinShunt<gem5::TimingExprBin>::Params::create() const
{
    return DummyTimingExprBinShunt<gem5::TimingExprBin>::create(*this);
}

} // namespace gem5
