/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/HelloObject.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "learning_gem5/part2/hello_object.hh"

#include "learning_gem5/part2/goodbye_object.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_HelloObject");
    py::class_<HelloObjectParams, SimObjectParams, std::unique_ptr<HelloObjectParams, py::nodelete>>(m, "HelloObjectParams")
        .def(py::init<>())
        .def("create", &HelloObjectParams::create)
        .def_readwrite("goodbye_object", &HelloObjectParams::goodbye_object)
        .def_readwrite("number_of_fires", &HelloObjectParams::number_of_fires)
        .def_readwrite("time_to_wait", &HelloObjectParams::time_to_wait)
        ;

    py::class_<gem5::HelloObject, gem5::SimObject, std::unique_ptr<gem5::HelloObject, py::nodelete>>(m, "gem5_COLONS_HelloObject")
        ;

}

static EmbeddedPyBind embed_obj("HelloObject", module_init, "SimObject");

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
class DummyHelloObjectParamsClass
{
  public:
    gem5::HelloObject *create() const;
};

template <class CxxClass, class Enable=void>
class DummyHelloObjectShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyHelloObjectShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const HelloObjectParams &>>>
{
  public:
    using Params = HelloObjectParams;
    static gem5::HelloObject *
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
class DummyHelloObjectShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const HelloObjectParams &>>>
{
  public:
    using Params = DummyHelloObjectParamsClass;
    static gem5::HelloObject *
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
[[maybe_unused]] gem5::HelloObject *
DummyHelloObjectShunt<gem5::HelloObject>::Params::create() const
{
    return DummyHelloObjectShunt<gem5::HelloObject>::create(*this);
}

} // namespace gem5
