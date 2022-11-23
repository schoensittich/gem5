/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/IrregularStreamBufferPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/irregular_stream_buffer.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "mem/cache/replacement_policies/base.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "mem/cache/replacement_policies/base.hh"
#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "mem/cache/replacement_policies/base.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_IrregularStreamBufferPrefetcher");
    py::class_<IrregularStreamBufferPrefetcherParams, QueuedPrefetcherParams, std::unique_ptr<IrregularStreamBufferPrefetcherParams, py::nodelete>>(m, "IrregularStreamBufferPrefetcherParams")
        .def(py::init<>())
        .def("create", &IrregularStreamBufferPrefetcherParams::create)
        .def_readwrite("address_map_cache_assoc", &IrregularStreamBufferPrefetcherParams::address_map_cache_assoc)
        .def_readwrite("address_map_cache_entries", &IrregularStreamBufferPrefetcherParams::address_map_cache_entries)
        .def_readwrite("chunk_size", &IrregularStreamBufferPrefetcherParams::chunk_size)
        .def_readwrite("degree", &IrregularStreamBufferPrefetcherParams::degree)
        .def_readwrite("num_counter_bits", &IrregularStreamBufferPrefetcherParams::num_counter_bits)
        .def_readwrite("prefetch_candidates_per_entry", &IrregularStreamBufferPrefetcherParams::prefetch_candidates_per_entry)
        .def_readwrite("ps_address_map_cache_indexing_policy", &IrregularStreamBufferPrefetcherParams::ps_address_map_cache_indexing_policy)
        .def_readwrite("ps_address_map_cache_replacement_policy", &IrregularStreamBufferPrefetcherParams::ps_address_map_cache_replacement_policy)
        .def_readwrite("sp_address_map_cache_indexing_policy", &IrregularStreamBufferPrefetcherParams::sp_address_map_cache_indexing_policy)
        .def_readwrite("sp_address_map_cache_replacement_policy", &IrregularStreamBufferPrefetcherParams::sp_address_map_cache_replacement_policy)
        .def_readwrite("training_unit_assoc", &IrregularStreamBufferPrefetcherParams::training_unit_assoc)
        .def_readwrite("training_unit_entries", &IrregularStreamBufferPrefetcherParams::training_unit_entries)
        .def_readwrite("training_unit_indexing_policy", &IrregularStreamBufferPrefetcherParams::training_unit_indexing_policy)
        .def_readwrite("training_unit_replacement_policy", &IrregularStreamBufferPrefetcherParams::training_unit_replacement_policy)
        ;

    py::class_<gem5::prefetch::IrregularStreamBuffer, gem5::prefetch::Queued, std::unique_ptr<gem5::prefetch::IrregularStreamBuffer, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_IrregularStreamBuffer")
        ;

}

static EmbeddedPyBind embed_obj("IrregularStreamBufferPrefetcher", module_init, "QueuedPrefetcher");

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
class DummyIrregularStreamBufferPrefetcherParamsClass
{
  public:
    gem5::prefetch::IrregularStreamBuffer *create() const;
};

template <class CxxClass, class Enable=void>
class DummyIrregularStreamBufferPrefetcherShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyIrregularStreamBufferPrefetcherShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const IrregularStreamBufferPrefetcherParams &>>>
{
  public:
    using Params = IrregularStreamBufferPrefetcherParams;
    static gem5::prefetch::IrregularStreamBuffer *
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
class DummyIrregularStreamBufferPrefetcherShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const IrregularStreamBufferPrefetcherParams &>>>
{
  public:
    using Params = DummyIrregularStreamBufferPrefetcherParamsClass;
    static gem5::prefetch::IrregularStreamBuffer *
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
[[maybe_unused]] gem5::prefetch::IrregularStreamBuffer *
DummyIrregularStreamBufferPrefetcherShunt<gem5::prefetch::IrregularStreamBuffer>::Params::create() const
{
    return DummyIrregularStreamBufferPrefetcherShunt<gem5::prefetch::IrregularStreamBuffer>::create(*this);
}

} // namespace gem5
