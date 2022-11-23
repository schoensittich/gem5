/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/Base64Delta8.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/compressors/base_delta.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_Base64Delta8");
    py::class_<Base64Delta8Params, BaseDictionaryCompressorParams, std::unique_ptr<Base64Delta8Params, py::nodelete>>(m, "Base64Delta8Params")
        .def(py::init<>())
        .def("create", &Base64Delta8Params::create)
        ;

    py::class_<gem5::compression::Base64Delta8, gem5::compression::BaseDictionaryCompressor, std::unique_ptr<gem5::compression::Base64Delta8, py::nodelete>>(m, "gem5_COLONS_compression_COLONS_Base64Delta8")
        ;

}

static EmbeddedPyBind embed_obj("Base64Delta8", module_init, "BaseDictionaryCompressor");

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
class DummyBase64Delta8ParamsClass
{
  public:
    gem5::compression::Base64Delta8 *create() const;
};

template <class CxxClass, class Enable=void>
class DummyBase64Delta8Shunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyBase64Delta8Shunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const Base64Delta8Params &>>>
{
  public:
    using Params = Base64Delta8Params;
    static gem5::compression::Base64Delta8 *
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
class DummyBase64Delta8Shunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const Base64Delta8Params &>>>
{
  public:
    using Params = DummyBase64Delta8ParamsClass;
    static gem5::compression::Base64Delta8 *
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
[[maybe_unused]] gem5::compression::Base64Delta8 *
DummyBase64Delta8Shunt<gem5::compression::Base64Delta8>::Params::create() const
{
    return DummyBase64Delta8Shunt<gem5::compression::Base64Delta8>::create(*this);
}

} // namespace gem5
