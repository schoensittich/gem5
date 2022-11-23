/**
 * DO NOT EDIT THIS FILE!
 * File automatically generated by
 *   /home/andre/uni/gem5/gem5/src/mem/slicc/symbols/StateMachine.py:1364
 */

// DMA: DMA Controller

#include <sys/types.h>
#include <unistd.h>

#include <cassert>
#include <typeinfo>

#include "base/logging.hh"

#include "debug/RubyGenerated.hh"
#include "debug/RubySlicc.hh"
#include "mem/ruby/protocol/DMA_Controller.hh"
#include "mem/ruby/protocol/DMA_Event.hh"
#include "mem/ruby/protocol/DMA_State.hh"

#include "mem/ruby/protocol/Types.hh"
#include "mem/ruby/system/RubySystem.hh"

#include "mem/ruby/slicc_interface/RubySlicc_includes.hh"
namespace gem5
{

namespace ruby
{

void
DMA_Controller::wakeup()
{
    if (getMemReqQueue() && getMemReqQueue()->isReady(clockEdge())) {
        serviceMemoryQueue();
    }

    int counter = 0;
    while (true) {
        unsigned char rejected[2];
        memset(rejected, 0, sizeof(unsigned char)*2);
        // Some cases will put us into an infinite loop without this limit
        assert(counter <= m_transitions_per_cycle);
        if (counter == m_transitions_per_cycle) {
            // Count how often we are fully utilized
            stats.fullyBusyCycles++;

            // Wakeup in another cycle and try again
            scheduleEvent(Cycles(1));
            break;
        }
            // DMAInPort dmaRequestQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_mandatoryQueue_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    [[maybe_unused]] const SequencerMsg* in_msg_ptr;
                                    in_msg_ptr = dynamic_cast<const SequencerMsg *>(((*m_mandatoryQueue_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if ((((*in_msg_ptr)).m_Type == SequencerRequestType_LD)) {
                                        {

                                            TransitionResult result = doTransition(DMA_Event_ReadRequest, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            } else if (result == TransitionResult_ResourceStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            } else if (result == TransitionResult_ProtocolStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            }

                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == SequencerRequestType_ST)) {
                                                {

                                                    TransitionResult result = doTransition(DMA_Event_WriteRequest, (((*m_TBEs_ptr)).lookup(((*in_msg_ptr)).m_LineAddress)), ((*in_msg_ptr)).m_LineAddress);

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    } else if (result == TransitionResult_ResourceStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    }

                                                }
                                                ;
                                            } else {
                                                panic("Runtime Error at MESI_Two_Level-dma.sm:113: %s.\n", ("Invalid request type"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[0]++;
                        }
            // DMAInPort dmaResponseQueue_in
            m_cur_in_port = 0;
            try {
                            if ((((*m_responseFromDir_ptr)).isReady((clockEdge())))) {
                                {
                                    // Declare message
                                    [[maybe_unused]] const ResponseMsg* in_msg_ptr;
                                    in_msg_ptr = dynamic_cast<const ResponseMsg *>(((*m_responseFromDir_ptr)).peek());
                                    if (in_msg_ptr == NULL) {
                                        // If the cast fails, this is the wrong inport (wrong message type).
                                        // Throw an exception, and the caller will decide to either try a
                                        // different inport or punt.
                                        throw RejectException();
                                    }
                                    if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_ACK)) {
                                        {

                                            TransitionResult result = doTransition(DMA_Event_Ack, (((*m_TBEs_ptr)).lookup((makeLineAddress(((*in_msg_ptr)).m_addr)))), (makeLineAddress(((*in_msg_ptr)).m_addr)));

                                            if (result == TransitionResult_Valid) {
                                                counter++;
                                                continue; // Check the first port again
                                            } else if (result == TransitionResult_ResourceStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            } else if (result == TransitionResult_ProtocolStall) {

                                                scheduleEvent(Cycles(1));
                                                // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                            }

                                        }
                                        ;
                                    } else {
                                            if ((((*in_msg_ptr)).m_Type == CoherenceResponseType_DATA)) {
                                                {

                                                    TransitionResult result = doTransition(DMA_Event_Data, (((*m_TBEs_ptr)).lookup((makeLineAddress(((*in_msg_ptr)).m_addr)))), (makeLineAddress(((*in_msg_ptr)).m_addr)));

                                                    if (result == TransitionResult_Valid) {
                                                        counter++;
                                                        continue; // Check the first port again
                                                    } else if (result == TransitionResult_ResourceStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    } else if (result == TransitionResult_ProtocolStall) {

                                                        scheduleEvent(Cycles(1));
                                                        // Cannot do anything with this transition, go check next doable transition (mostly likely of next port)

                                                    }

                                                }
                                                ;
                                            } else {
                                                panic("Runtime Error at MESI_Two_Level-dma.sm:129: %s.\n", ("Invalid response type"));
                                                ;
                                            }
                                        }
                                        }
                                    }
                        } catch (const RejectException & e) {
                            rejected[1]++;
                        }
        // If we got this far, we have nothing left todo or something went
        // wrong
        break;
    }
}

} // namespace ruby
} // namespace gem5
