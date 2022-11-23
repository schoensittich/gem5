/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ExternalMaster.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/external_master.hh"

#include <string>
#include <string>
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ExternalMaster");
    py::class_<ExternalMasterParams, SimObjectParams, std::unique_ptr<ExternalMasterParams, py::nodelete>>(m, "ExternalMasterParams")
        .def(py::init<>())
        .def("create", &ExternalMasterParams::create)
        .def_readwrite("port_data", &ExternalMasterParams::port_data)
        .def_readwrite("port_type", &ExternalMasterParams::port_type)
        .def_readwrite("system", &ExternalMasterParams::system)
        .def_readwrite("port_port_connection_count", &ExternalMasterParams::port_port_connection_count)
        ;

    py::class_<gem5::ExternalMaster, gem5::SimObject, std::unique_ptr<gem5::ExternalMaster, py::nodelete>>(m, "gem5_COLONS_ExternalMaster")
        ;

}

static EmbeddedPyBind embed_obj("ExternalMaster", module_init, "SimObject");

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
class DummyExternalMasterParamsClass
{
  public:
    gem5::ExternalMaster *create() const;
};

template <class CxxClass, class Enable=void>
class DummyExternalMasterShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyExternalMasterShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ExternalMasterParams &>>>
{
  public:
    using Params = ExternalMasterParams;
    static gem5::ExternalMaster *
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
class DummyExternalMasterShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ExternalMasterParams &>>>
{
  public:
    using Params = DummyExternalMasterParamsClass;
    static gem5::ExternalMaster *
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
[[maybe_unused]] gem5::ExternalMaster *
DummyExternalMasterShunt<gem5::ExternalMaster>::Params::create() const
{
    return DummyExternalMasterShunt<gem5::ExternalMaster>::create(*this);
}

} // namespace gem5