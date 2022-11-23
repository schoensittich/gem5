/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   build_tools/sim_object_param_struct_cc.py:273
 */

#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

#include <type_traits>

#include "base/compiler.hh"
#include "params/DMASequencer.hh"
#include "sim/init.hh"
#include "sim/sim_object.hh"

#include "mem/ruby/system/DMASequencer.hh"

#include "base/types.hh"
namespace py = pybind11;

namespace gem5
{

static void
module_init(py::module_ &m_internal)
{
py::module_ m = m_internal.def_submodule("param_DMASequencer");
    py::class_<DMASequencerParams, RubyPortParams, std::unique_ptr<DMASequencerParams, py::nodelete>>(m, "DMASequencerParams")
        .def(py::init<>())
        .def("create", &DMASequencerParams::create)
        .def_readwrite("max_outstanding_requests", &DMASequencerParams::max_outstanding_requests)
        ;

    py::class_<gem5::ruby::DMASequencer, gem5::ruby::RubyPort, std::unique_ptr<gem5::ruby::DMASequencer, py::nodelete>>(m, "gem5_COLONS_ruby_COLONS_DMASequencer")
        ;

}

static EmbeddedPyBind embed_obj("DMASequencer", module_init, "RubyPort");

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
class DummyDMASequencerParamsClass
{
  public:
    gem5::ruby::DMASequencer *create() const;
};

template <class CxxClass, class Enable=void>
class DummyDMASequencerShunt;

/*
 * This version directs to the real Params struct and the
 * default behavior of create if there's an appropriate
 * constructor.
 */
template <class CxxClass>
class DummyDMASequencerShunt<CxxClass, std::enable_if_t<
    std::is_constructible_v<CxxClass, const DMASequencerParams &>>>
{
  public:
    using Params = DMASequencerParams;
    static gem5::ruby::DMASequencer *
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
class DummyDMASequencerShunt<CxxClass, std::enable_if_t<
    !std::is_constructible_v<CxxClass, const DMASequencerParams &>>>
{
  public:
    using Params = DummyDMASequencerParamsClass;
    static gem5::ruby::DMASequencer *
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
[[maybe_unused]] gem5::ruby::DMASequencer *
DummyDMASequencerShunt<gem5::ruby::DMASequencer>::Params::create() const
{
    return DummyDMASequencerShunt<gem5::ruby::DMASequencer>::create(*this);
}

} // namespace gem5