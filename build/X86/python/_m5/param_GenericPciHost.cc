/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/GenericPciHost.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/pci/host.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "dev/platform.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_GenericPciHost");
    py::class_<GenericPciHostParams, PciHostParams, std::unique_ptr<GenericPciHostParams, py::nodelete>>(m, "GenericPciHostParams")
        .def(py::init<>())
        .def("create", &GenericPciHostParams::create)
        .def_readwrite("conf_base", &GenericPciHostParams::conf_base)
        .def_readwrite("conf_device_bits", &GenericPciHostParams::conf_device_bits)
        .def_readwrite("conf_size", &GenericPciHostParams::conf_size)
        .def_readwrite("pci_dma_base", &GenericPciHostParams::pci_dma_base)
        .def_readwrite("pci_mem_base", &GenericPciHostParams::pci_mem_base)
        .def_readwrite("pci_pio_base", &GenericPciHostParams::pci_pio_base)
        .def_readwrite("platform", &GenericPciHostParams::platform)
        ;

    py::class_<gem5::GenericPciHost, gem5::PciHost, std::unique_ptr<gem5::GenericPciHost, py::nodelete>>(m, "gem5_COLONS_GenericPciHost")
        ;

}

static EmbeddedPyBind embed_obj("GenericPciHost", module_init, "PciHost");

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
class DummyGenericPciHostParamsClass
{
  public:
    gem5::GenericPciHost *create() const;
};

template <class CxxClass, class Enable=void>
class DummyGenericPciHostShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyGenericPciHostShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const GenericPciHostParams &>>>
{
  public:
    using Params = GenericPciHostParams;
    static gem5::GenericPciHost *
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
class DummyGenericPciHostShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const GenericPciHostParams &>>>
{
  public:
    using Params = DummyGenericPciHostParamsClass;
    static gem5::GenericPciHost *
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
[[maybe_unused]] gem5::GenericPciHost *
DummyGenericPciHostShunt<gem5::GenericPciHost>::Params::create() const
{
    return DummyGenericPciHostShunt<gem5::GenericPciHost>::create(*this);
}

} // namespace gem5
