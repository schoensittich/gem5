/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/ZeroCompressor.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/compressors/zero.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_ZeroCompressor");
    py::class_<ZeroCompressorParams, BaseDictionaryCompressorParams, std::unique_ptr<ZeroCompressorParams, py::nodelete>>(m, "ZeroCompressorParams")
        .def(py::init<>())
        .def("create", &ZeroCompressorParams::create)
        ;

    py::class_<gem5::compression::Zero, gem5::compression::BaseDictionaryCompressor, std::unique_ptr<gem5::compression::Zero, py::nodelete>>(m, "gem5_COLONS_compression_COLONS_Zero")
        ;

}

static EmbeddedPyBind embed_obj("ZeroCompressor", module_init, "BaseDictionaryCompressor");

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
class DummyZeroCompressorParamsClass
{
  public:
    gem5::compression::Zero *create() const;
};

template <class CxxClass, class Enable=void>
class DummyZeroCompressorShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyZeroCompressorShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const ZeroCompressorParams &>>>
{
  public:
    using Params = ZeroCompressorParams;
    static gem5::compression::Zero *
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
class DummyZeroCompressorShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const ZeroCompressorParams &>>>
{
  public:
    using Params = DummyZeroCompressorParamsClass;
    static gem5::compression::Zero *
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
[[maybe_unused]] gem5::compression::Zero *
DummyZeroCompressorShunt<gem5::compression::Zero>::Params::create() const
{
    return DummyZeroCompressorShunt<gem5::compression::Zero>::create(*this);
}

} // namespace gem5
