/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/QemuFwCfgItemE820.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/x86/qemu_fw_cfg.hh"

#include <vector>
#include "arch/x86/bios/e820.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_QemuFwCfgItemE820");
    py::class_<QemuFwCfgItemE820Params, QemuFwCfgItemParams, std::unique_ptr<QemuFwCfgItemE820Params, py::nodelete>>(m, "QemuFwCfgItemE820Params")
        .def(py::init<>())
        .def("create", &QemuFwCfgItemE820Params::create)
        .def_readwrite("entries", &QemuFwCfgItemE820Params::entries)
        ;

    py::class_<gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820>, gem5::qemu::FwCfgItemFactoryBase, std::unique_ptr<gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820>, py::nodelete>>(m, "gem5_COLONS_qemu_COLONS_FwCfgItemFactory<gem5_COLONS_qemu_COLONS_FwCfgItemE820>")
        ;

}

static EmbeddedPyBind embed_obj("QemuFwCfgItemE820", module_init, "QemuFwCfgItem");

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
class DummyQemuFwCfgItemE820ParamsClass
{
  public:
    gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820> *create() const;
};

template <class CxxClass, class Enable=void>
class DummyQemuFwCfgItemE820Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyQemuFwCfgItemE820Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const QemuFwCfgItemE820Params &>>>
{
  public:
    using Params = QemuFwCfgItemE820Params;
    static gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820> *
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
class DummyQemuFwCfgItemE820Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const QemuFwCfgItemE820Params &>>>
{
  public:
    using Params = DummyQemuFwCfgItemE820ParamsClass;
    static gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820> *
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
[[maybe_unused]] gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820> *
DummyQemuFwCfgItemE820Shunt<gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820>>::Params::create() const
{
    return DummyQemuFwCfgItemE820Shunt<gem5::qemu::FwCfgItemFactory<gem5::qemu::FwCfgItemE820>>::create(*this);
}

} // namespace gem5
