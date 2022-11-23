/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/BOPPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/bop.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_BOPPrefetcher");
    py::class_<BOPPrefetcherParams, QueuedPrefetcherParams, std::unique_ptr<BOPPrefetcherParams, py::nodelete>>(m, "BOPPrefetcherParams")
        .def(py::init<>())
        .def("create", &BOPPrefetcherParams::create)
        .def_readwrite("bad_score", &BOPPrefetcherParams::bad_score)
        .def_readwrite("delay_queue_cycles", &BOPPrefetcherParams::delay_queue_cycles)
        .def_readwrite("delay_queue_enable", &BOPPrefetcherParams::delay_queue_enable)
        .def_readwrite("delay_queue_size", &BOPPrefetcherParams::delay_queue_size)
        .def_readwrite("negative_offsets_enable", &BOPPrefetcherParams::negative_offsets_enable)
        .def_readwrite("offset_list_size", &BOPPrefetcherParams::offset_list_size)
        .def_readwrite("round_max", &BOPPrefetcherParams::round_max)
        .def_readwrite("rr_size", &BOPPrefetcherParams::rr_size)
        .def_readwrite("score_max", &BOPPrefetcherParams::score_max)
        .def_readwrite("tag_bits", &BOPPrefetcherParams::tag_bits)
        ;

    py::class_<gem5::prefetch::BOP, gem5::prefetch::Queued, std::unique_ptr<gem5::prefetch::BOP, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_BOP")
        ;

}

static EmbeddedPyBind embed_obj("BOPPrefetcher", module_init, "QueuedPrefetcher");

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
class DummyBOPPrefetcherParamsClass
{
  public:
    gem5::prefetch::BOP *create() const;
};

template <class CxxClass, class Enable=void>
class DummyBOPPrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyBOPPrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const BOPPrefetcherParams &>>>
{
  public:
    using Params = BOPPrefetcherParams;
    static gem5::prefetch::BOP *
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
class DummyBOPPrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const BOPPrefetcherParams &>>>
{
  public:
    using Params = DummyBOPPrefetcherParamsClass;
    static gem5::prefetch::BOP *
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
[[maybe_unused]] gem5::prefetch::BOP *
DummyBOPPrefetcherShunt<gem5::prefetch::BOP>::Params::create() const
{
    return DummyBOPPrefetcherShunt<gem5::prefetch::BOP>::create(*this);
}

} // namespace gem5
