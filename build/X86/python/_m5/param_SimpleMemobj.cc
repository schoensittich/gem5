/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SimpleMemobj.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "learning_gem5/part2/simple_memobj.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SimpleMemobj");
    py::class_<SimpleMemobjParams, SimObjectParams, std::unique_ptr<SimpleMemobjParams, py::nodelete>>(m, "SimpleMemobjParams")
        .def(py::init<>())
        .def("create", &SimpleMemobjParams::create)
        .def_readwrite("port_inst_port_connection_count", &SimpleMemobjParams::port_inst_port_connection_count)
        .def_readwrite("port_data_port_connection_count", &SimpleMemobjParams::port_data_port_connection_count)
        .def_readwrite("port_mem_side_connection_count", &SimpleMemobjParams::port_mem_side_connection_count)
        ;

    py::class_<gem5::SimpleMemobj, gem5::SimObject, std::unique_ptr<gem5::SimpleMemobj, py::nodelete>>(m, "gem5_COLONS_SimpleMemobj")
        ;

}

static EmbeddedPyBind embed_obj("SimpleMemobj", module_init, "SimObject");

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
class DummySimpleMemobjParamsClass
{
  public:
    gem5::SimpleMemobj *create() const;
};

template <class CxxClass, class Enable=void>
class DummySimpleMemobjShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySimpleMemobjShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SimpleMemobjParams &>>>
{
  public:
    using Params = SimpleMemobjParams;
    static gem5::SimpleMemobj *
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
class DummySimpleMemobjShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SimpleMemobjParams &>>>
{
  public:
    using Params = DummySimpleMemobjParamsClass;
    static gem5::SimpleMemobj *
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
[[maybe_unused]] gem5::SimpleMemobj *
DummySimpleMemobjShunt<gem5::SimpleMemobj>::Params::create() const
{
    return DummySimpleMemobjShunt<gem5::SimpleMemobj>::create(*this);
}

} // namespace gem5
