/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/MultiPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/multi.hh"

#include <vector>
#include "mem/cache/prefetch/base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_MultiPrefetcher");
    py::class_<MultiPrefetcherParams, BasePrefetcherParams, std::unique_ptr<MultiPrefetcherParams, py::nodelete>>(m, "MultiPrefetcherParams")
        .def(py::init<>())
        .def("create", &MultiPrefetcherParams::create)
        .def_readwrite("prefetchers", &MultiPrefetcherParams::prefetchers)
        ;

    py::class_<gem5::prefetch::Multi, gem5::prefetch::Base, std::unique_ptr<gem5::prefetch::Multi, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_Multi")
        ;

}

static EmbeddedPyBind embed_obj("MultiPrefetcher", module_init, "BasePrefetcher");

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
class DummyMultiPrefetcherParamsClass
{
  public:
    gem5::prefetch::Multi *create() const;
};

template <class CxxClass, class Enable=void>
class DummyMultiPrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyMultiPrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const MultiPrefetcherParams &>>>
{
  public:
    using Params = MultiPrefetcherParams;
    static gem5::prefetch::Multi *
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
class DummyMultiPrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const MultiPrefetcherParams &>>>
{
  public:
    using Params = DummyMultiPrefetcherParamsClass;
    static gem5::prefetch::Multi *
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
[[maybe_unused]] gem5::prefetch::Multi *
DummyMultiPrefetcherShunt<gem5::prefetch::Multi>::Params::create() const
{
    return DummyMultiPrefetcherShunt<gem5::prefetch::Multi>::create(*this);
}

} // namespace gem5
