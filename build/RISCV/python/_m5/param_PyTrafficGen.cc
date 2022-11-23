/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PyTrafficGen.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "cpu/testers/traffic_gen/pygen.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PyTrafficGen");
    py::class_<PyTrafficGenParams, BaseTrafficGenParams, std::unique_ptr<PyTrafficGenParams, py::nodelete>>(m, "PyTrafficGenParams")
        .def(py::init<>())
        .def("create", &PyTrafficGenParams::create)
        ;

    py::class_<gem5::PyTrafficGen, gem5::BaseTrafficGen, std::unique_ptr<gem5::PyTrafficGen, py::nodelete>>(m, "gem5_COLONS_PyTrafficGen")
        .def("createIdle", &gem5::PyTrafficGen::createIdle)
        .def("createExit", &gem5::PyTrafficGen::createExit)
        .def("createLinear", &gem5::PyTrafficGen::createLinear)
        .def("createRandom", &gem5::PyTrafficGen::createRandom)
        .def("createDram", &gem5::PyTrafficGen::createDram)
        .def("createDramRot", &gem5::PyTrafficGen::createDramRot)
        .def("createHybrid", &gem5::PyTrafficGen::createHybrid)
        .def("createNvm", &gem5::PyTrafficGen::createNvm)
        .def("createStrided", &gem5::PyTrafficGen::createStrided)
        .def("start", &gem5::PyTrafficGen::start, py::arg("meta_generator"))
        .def("createTrace", &gem5::PyTrafficGen::createTrace, py::arg("duration"), py::arg("trace_file"), py::arg("addr_offset") = 0)
        ;

}

static EmbeddedPyBind embed_obj("PyTrafficGen", module_init, "BaseTrafficGen");

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
class DummyPyTrafficGenParamsClass
{
  public:
    gem5::PyTrafficGen *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPyTrafficGenShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPyTrafficGenShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PyTrafficGenParams &>>>
{
  public:
    using Params = PyTrafficGenParams;
    static gem5::PyTrafficGen *
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
class DummyPyTrafficGenShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PyTrafficGenParams &>>>
{
  public:
    using Params = DummyPyTrafficGenParamsClass;
    static gem5::PyTrafficGen *
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
[[maybe_unused]] gem5::PyTrafficGen *
DummyPyTrafficGenShunt<gem5::PyTrafficGen>::Params::create() const
{
    return DummyPyTrafficGenShunt<gem5::PyTrafficGen>::create(*this);
}

} // namespace gem5