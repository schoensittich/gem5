/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/QoSPropFairPolicy.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/qos/policy_pf.hh"

namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_QoSPropFairPolicy");
    py::class_<QoSPropFairPolicyParams, QoSPolicyParams, std::unique_ptr<QoSPropFairPolicyParams, py::nodelete>>(m, "QoSPropFairPolicyParams")
        .def(py::init<>())
        .def("create", &QoSPropFairPolicyParams::create)
        .def_readwrite("weight", &QoSPropFairPolicyParams::weight)
        ;

    py::class_<gem5::memory::qos::PropFairPolicy, gem5::memory::qos::Policy, std::unique_ptr<gem5::memory::qos::PropFairPolicy, py::nodelete>>(m, "gem5_COLONS_memory_COLONS_qos_COLONS_PropFairPolicy")
        .def("initRequestorName", &gem5::memory::qos::PropFairPolicy::initRequestorName)
        .def("initRequestorObj", &gem5::memory::qos::PropFairPolicy::initRequestorObj)
        ;

}

static EmbeddedPyBind embed_obj("QoSPropFairPolicy", module_init, "QoSPolicy");

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
class DummyQoSPropFairPolicyParamsClass
{
  public:
    gem5::memory::qos::PropFairPolicy *create() const;
};

template <class CxxClass, class Enable=void>
class DummyQoSPropFairPolicyShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyQoSPropFairPolicyShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const QoSPropFairPolicyParams &>>>
{
  public:
    using Params = QoSPropFairPolicyParams;
    static gem5::memory::qos::PropFairPolicy *
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
class DummyQoSPropFairPolicyShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const QoSPropFairPolicyParams &>>>
{
  public:
    using Params = DummyQoSPropFairPolicyParamsClass;
    static gem5::memory::qos::PropFairPolicy *
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
[[maybe_unused]] gem5::memory::qos::PropFairPolicy *
DummyQoSPropFairPolicyShunt<gem5::memory::qos::PropFairPolicy>::Params::create() const
{
    return DummyQoSPropFairPolicyShunt<gem5::memory::qos::PropFairPolicy>::create(*this);
}

} // namespace gem5