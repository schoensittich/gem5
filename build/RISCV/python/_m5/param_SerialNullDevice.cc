/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/SerialNullDevice.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/serial/serial.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_SerialNullDevice");
    py::class_<SerialNullDeviceParams, SerialDeviceParams, std::unique_ptr<SerialNullDeviceParams, py::nodelete>>(m, "SerialNullDeviceParams")
        .def(py::init<>())
        .def("create", &SerialNullDeviceParams::create)
        ;

    py::class_<gem5::SerialNullDevice, gem5::SerialDevice, std::unique_ptr<gem5::SerialNullDevice, py::nodelete>>(m, "gem5_COLONS_SerialNullDevice")
        ;

}

static EmbeddedPyBind embed_obj("SerialNullDevice", module_init, "SerialDevice");

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
class DummySerialNullDeviceParamsClass
{
  public:
    gem5::SerialNullDevice *create() const;
};

template <class CxxClass, class Enable=void>
class DummySerialNullDeviceShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummySerialNullDeviceShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const SerialNullDeviceParams &>>>
{
  public:
    using Params = SerialNullDeviceParams;
    static gem5::SerialNullDevice *
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
class DummySerialNullDeviceShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const SerialNullDeviceParams &>>>
{
  public:
    using Params = DummySerialNullDeviceParamsClass;
    static gem5::SerialNullDevice *
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
[[maybe_unused]] gem5::SerialNullDevice *
DummySerialNullDeviceShunt<gem5::SerialNullDevice>::Params::create() const
{
    return DummySerialNullDeviceShunt<gem5::SerialNullDevice>::create(*this);
}

} // namespace gem5
