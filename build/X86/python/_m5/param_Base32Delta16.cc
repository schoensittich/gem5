/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Base32Delta16.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/compressors/base_delta.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Base32Delta16");
    py::class_<Base32Delta16Params, BaseDictionaryCompressorParams, std::unique_ptr<Base32Delta16Params, py::nodelete>>(m, "Base32Delta16Params")
        .def(py::init<>())
        .def("create", &Base32Delta16Params::create)
        ;

    py::class_<gem5::compression::Base32Delta16, gem5::compression::BaseDictionaryCompressor, std::unique_ptr<gem5::compression::Base32Delta16, py::nodelete>>(m, "gem5_COLONS_compression_COLONS_Base32Delta16")
        ;

}

static EmbeddedPyBind embed_obj("Base32Delta16", module_init, "BaseDictionaryCompressor");

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
class DummyBase32Delta16ParamsClass
{
  public:
    gem5::compression::Base32Delta16 *create() const;
};

template <class CxxClass, class Enable=void>
class DummyBase32Delta16Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyBase32Delta16Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Base32Delta16Params &>>>
{
  public:
    using Params = Base32Delta16Params;
    static gem5::compression::Base32Delta16 *
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
class DummyBase32Delta16Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Base32Delta16Params &>>>
{
  public:
    using Params = DummyBase32Delta16ParamsClass;
    static gem5::compression::Base32Delta16 *
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
[[maybe_unused]] gem5::compression::Base32Delta16 *
DummyBase32Delta16Shunt<gem5::compression::Base32Delta16>::Params::create() const
{
    return DummyBase32Delta16Shunt<gem5::compression::Base32Delta16>::create(*this);
}

} // namespace gem5
