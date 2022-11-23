/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/LupioBLK.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/lupio/lupio_blk.hh"

#include "dev/storage/disk_image.hh"
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
py::module_ m = m_internal.def_submodule("param_LupioBLK");
    py::class_<LupioBLKParams, DmaDeviceParams, std::unique_ptr<LupioBLKParams, py::nodelete>>(m, "LupioBLKParams")
        .def(py::init<>())
        .def("create", &LupioBLKParams::create)
        .def_readwrite("image", &LupioBLKParams::image)
        .def_readwrite("int_id", &LupioBLKParams::int_id)
        .def_readwrite("latency", &LupioBLKParams::latency)
        .def_readwrite("pio_addr", &LupioBLKParams::pio_addr)
        .def_readwrite("pio_size", &LupioBLKParams::pio_size)
        .def_readwrite("platform", &LupioBLKParams::platform)
        ;

    py::class_<gem5::LupioBLK, gem5::DmaDevice, std::unique_ptr<gem5::LupioBLK, py::nodelete>>(m, "gem5_COLONS_LupioBLK")
        ;

}

static EmbeddedPyBind embed_obj("LupioBLK", module_init, "DmaDevice");

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
class DummyLupioBLKParamsClass
{
  public:
    gem5::LupioBLK *create() const;
};

template <class CxxClass, class Enable=void>
class DummyLupioBLKShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyLupioBLKShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const LupioBLKParams &>>>
{
  public:
    using Params = LupioBLKParams;
    static gem5::LupioBLK *
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
class DummyLupioBLKShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const LupioBLKParams &>>>
{
  public:
    using Params = DummyLupioBLKParamsClass;
    static gem5::LupioBLK *
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
[[maybe_unused]] gem5::LupioBLK *
DummyLupioBLKShunt<gem5::LupioBLK>::Params::create() const
{
    return DummyLupioBLKShunt<gem5::LupioBLK>::create(*this);
}

} // namespace gem5
