/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/VirtIODeviceBase.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "dev/virtio/base.hh"

#include "enums/ByteOrder.hh"
#include "base/types.hh"
#include "sim/system.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_VirtIODeviceBase");
    py::class_<VirtIODeviceBaseParams, SimObjectParams, std::unique_ptr<VirtIODeviceBaseParams, py::nodelete>>(m, "VirtIODeviceBaseParams")
        .def_readwrite("byte_order", &VirtIODeviceBaseParams::byte_order)
        .def_readwrite("subsystem", &VirtIODeviceBaseParams::subsystem)
        .def_readwrite("system", &VirtIODeviceBaseParams::system)
        ;

    py::class_<gem5::VirtIODeviceBase, gem5::SimObject, std::unique_ptr<gem5::VirtIODeviceBase, py::nodelete>>(m, "gem5_COLONS_VirtIODeviceBase")
        ;

}

static EmbeddedPyBind embed_obj("VirtIODeviceBase", module_init, "SimObject");

} // namespace gem5
