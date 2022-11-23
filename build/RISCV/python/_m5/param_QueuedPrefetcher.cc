/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/QueuedPrefetcher.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/prefetch/queued.hh"

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
py::module_ m = m_internal.def_submodule("param_QueuedPrefetcher");
    py::class_<QueuedPrefetcherParams, BasePrefetcherParams, std::unique_ptr<QueuedPrefetcherParams, py::nodelete>>(m, "QueuedPrefetcherParams")
        .def_readwrite("cache_snoop", &QueuedPrefetcherParams::cache_snoop)
        .def_readwrite("latency", &QueuedPrefetcherParams::latency)
        .def_readwrite("max_prefetch_requests_with_pending_translation", &QueuedPrefetcherParams::max_prefetch_requests_with_pending_translation)
        .def_readwrite("queue_filter", &QueuedPrefetcherParams::queue_filter)
        .def_readwrite("queue_size", &QueuedPrefetcherParams::queue_size)
        .def_readwrite("queue_squash", &QueuedPrefetcherParams::queue_squash)
        .def_readwrite("tag_prefetch", &QueuedPrefetcherParams::tag_prefetch)
        .def_readwrite("throttle_control_percentage", &QueuedPrefetcherParams::throttle_control_percentage)
        ;

    py::class_<gem5::prefetch::Queued, gem5::prefetch::Base, std::unique_ptr<gem5::prefetch::Queued, py::nodelete>>(m, "gem5_COLONS_prefetch_COLONS_Queued")
        ;

}

static EmbeddedPyBind embed_obj("QueuedPrefetcher", module_init, "BasePrefetcher");

} // namespace gem5
