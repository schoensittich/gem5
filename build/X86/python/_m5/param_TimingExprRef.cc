/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/TimingExprRef.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/timing_expr.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_TimingExprRef");
    py::class_<TimingExprRefParams, TimingExprParams, std::unique_ptr<TimingExprRefParams, py::nodelete>>(m, "TimingExprRefParams")
        .def(py::init<>())
        .def("create", &TimingExprRefParams::create)
        .def_readwrite("index", &TimingExprRefParams::index)
        ;

    py::class_<gem5::TimingExprRef, gem5::TimingExpr, std::unique_ptr<gem5::TimingExprRef, py::nodelete>>(m, "gem5_COLONS_TimingExprRef")
        ;

}

static EmbeddedPyBind embed_obj("TimingExprRef", module_init, "TimingExpr");

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
class DummyTimingExprRefParamsClass
{
  public:
    gem5::TimingExprRef *create() const;
};

template <class CxxClass, class Enable=void>
class DummyTimingExprRefShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyTimingExprRefShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const TimingExprRefParams &>>>
{
  public:
    using Params = TimingExprRefParams;
    static gem5::TimingExprRef *
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
class DummyTimingExprRefShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const TimingExprRefParams &>>>
{
  public:
    using Params = DummyTimingExprRefParamsClass;
    static gem5::TimingExprRef *
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
[[maybe_unused]] gem5::TimingExprRef *
DummyTimingExprRefShunt<gem5::TimingExprRef>::Params::create() const
{
    return DummyTimingExprRefShunt<gem5::TimingExprRef>::create(*this);
}

} // namespace gem5
