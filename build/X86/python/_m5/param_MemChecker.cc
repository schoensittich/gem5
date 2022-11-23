/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MemChecker.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/mem_checker.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MemChecker");
    py::class_<MemCheckerParams, SimObjectParams, std::unique_ptr<MemCheckerParams, py::nodelete>>(m, "MemCheckerParams")
        .def(py::init<>())
        .def("create", &MemCheckerParams::create)
        ;

    py::class_<gem5::MemChecker, gem5::SimObject, std::unique_ptr<gem5::MemChecker, py::nodelete>>(m, "gem5_COLONS_MemChecker")
        ;

}

static EmbeddedPyBind embed_obj("MemChecker", module_init, "SimObject");

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
class DummyMemCheckerParamsClass
{
  public:
    gem5::MemChecker *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMemCheckerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMemCheckerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MemCheckerParams &>>>
{
  public:
    using Params = MemCheckerParams;
    static gem5::MemChecker *
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
class DummyMemCheckerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MemCheckerParams &>>>
{
  public:
    using Params = DummyMemCheckerParamsClass;
    static gem5::MemChecker *
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
[[maybe_unused]] gem5::MemChecker *
DummyMemCheckerShunt<gem5::MemChecker>::Params::create() const
{
    return DummyMemCheckerShunt<gem5::MemChecker>::create(*this);
}

} // namespace gem5
