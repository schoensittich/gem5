/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/FALRU.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/fa_lru.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_FALRU");
    py::class_<FALRUParams, BaseTagsParams, std::unique_ptr<FALRUParams, py::nodelete>>(m, "FALRUParams")
        .def(py::init<>())
        .def("create", &FALRUParams::create)
        .def_readwrite("min_tracked_cache_size", &FALRUParams::min_tracked_cache_size)
        ;

    py::class_<gem5::FALRU, gem5::BaseTags, std::unique_ptr<gem5::FALRU, py::nodelete>>(m, "gem5_COLONS_FALRU")
        ;

}

static EmbeddedPyBind embed_obj("FALRU", module_init, "BaseTags");

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
class DummyFALRUParamsClass
{
  public:
    gem5::FALRU *create() const;
};

template <class CxxClass, class Enable=void>
class DummyFALRUShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyFALRUShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const FALRUParams &>>>
{
  public:
    using Params = FALRUParams;
    static gem5::FALRU *
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
class DummyFALRUShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const FALRUParams &>>>
{
  public:
    using Params = DummyFALRUParamsClass;
    static gem5::FALRU *
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
[[maybe_unused]] gem5::FALRU *
DummyFALRUShunt<gem5::FALRU>::Params::create() const
{
    return DummyFALRUShunt<gem5::FALRU>::create(*this);
}

} // namespace gem5
