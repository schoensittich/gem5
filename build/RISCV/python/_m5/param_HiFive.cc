/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/HiFive.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/riscv/hifive.hh"

#include "dev/riscv/clint.hh"
#include "dev/riscv/plic.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_HiFive");
    py::class_<HiFiveParams, PlatformParams, std::unique_ptr<HiFiveParams, py::nodelete>>(m, "HiFiveParams")
        .def(py::init<>())
        .def("create", &HiFiveParams::create)
        .def_readwrite("clint", &HiFiveParams::clint)
        .def_readwrite("plic", &HiFiveParams::plic)
        .def_readwrite("uart_int_id", &HiFiveParams::uart_int_id)
        ;

    py::class_<gem5::HiFive, gem5::Platform, std::unique_ptr<gem5::HiFive, py::nodelete>>(m, "gem5_COLONS_HiFive")
        ;

}

static EmbeddedPyBind embed_obj("HiFive", module_init, "Platform");

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
class DummyHiFiveParamsClass
{
  public:
    gem5::HiFive *create() const;
};

template <class CxxClass, class Enable=void>
class DummyHiFiveShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyHiFiveShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const HiFiveParams &>>>
{
  public:
    using Params = HiFiveParams;
    static gem5::HiFive *
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
class DummyHiFiveShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const HiFiveParams &>>>
{
  public:
    using Params = DummyHiFiveParamsClass;
    static gem5::HiFive *
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
[[maybe_unused]] gem5::HiFive *
DummyHiFiveShunt<gem5::HiFive>::Params::create() const
{
    return DummyHiFiveShunt<gem5::HiFive>::create(*this);
}

} // namespace gem5