/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/BaseTags.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/cache/tags/base.hh"

#include "base/types.hh"
#include "base/types.hh"
#include "mem/cache/tags/indexing_policies/base.hh"
#include "base/types.hh"
#include "sim/system.hh"
#include "base/types.hh"
#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_BaseTags");
    py::class_<BaseTagsParams, ClockedObjectParams, std::unique_ptr<BaseTagsParams, py::nodelete>>(m, "BaseTagsParams")
        .def_readwrite("block_size", &BaseTagsParams::block_size)
        .def_readwrite("entry_size", &BaseTagsParams::entry_size)
        .def_readwrite("indexing_policy", &BaseTagsParams::indexing_policy)
        .def_readwrite("sequential_access", &BaseTagsParams::sequential_access)
        .def_readwrite("size", &BaseTagsParams::size)
        .def_readwrite("system", &BaseTagsParams::system)
        .def_readwrite("tag_latency", &BaseTagsParams::tag_latency)
        .def_readwrite("warmup_percentage", &BaseTagsParams::warmup_percentage)
        ;

    py::class_<gem5::BaseTags, gem5::ClockedObject, std::unique_ptr<gem5::BaseTags, py::nodelete>>(m, "gem5_COLONS_BaseTags")
        ;

}

static EmbeddedPyBind embed_obj("BaseTags", module_init, "ClockedObject");

} // namespace gem5