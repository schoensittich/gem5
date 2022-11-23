/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/PciVirtIO.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/pci.hh"

#include "dev/virtio/base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_PciVirtIO");
    py::class_<PciVirtIOParams, PciDeviceParams, std::unique_ptr<PciVirtIOParams, py::nodelete>>(m, "PciVirtIOParams")
        .def(py::init<>())
        .def("create", &PciVirtIOParams::create)
        .def_readwrite("vio", &PciVirtIOParams::vio)
        ;

    py::class_<gem5::PciVirtIO, gem5::PciDevice, std::unique_ptr<gem5::PciVirtIO, py::nodelete>>(m, "gem5_COLONS_PciVirtIO")
        ;

}

static EmbeddedPyBind embed_obj("PciVirtIO", module_init, "PciDevice");

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
class DummyPciVirtIOParamsClass
{
  public:
    gem5::PciVirtIO *create() const;
};

template <class CxxClass, class Enable=void>
class DummyPciVirtIOShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyPciVirtIOShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const PciVirtIOParams &>>>
{
  public:
    using Params = PciVirtIOParams;
    static gem5::PciVirtIO *
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
class DummyPciVirtIOShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const PciVirtIOParams &>>>
{
  public:
    using Params = DummyPciVirtIOParamsClass;
    static gem5::PciVirtIO *
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
[[maybe_unused]] gem5::PciVirtIO *
DummyPciVirtIOShunt<gem5::PciVirtIO>::Params::create() const
{
    return DummyPciVirtIOShunt<gem5::PciVirtIO>::create(*this);
}

} // namespace gem5