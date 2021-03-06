//--------------------------------------------------------------------------
// Code generated by the SmartSoft MDSD Toolchain
// The SmartSoft Toolchain has been developed by:
//  
// Service Robotics Research Center
// University of Applied Sciences Ulm
// Prittwitzstr. 10
// 89075 Ulm (Germany)
//
// Information about the SmartSoft MDSD Toolchain is available at:
// www.servicerobotik-ulm.de
//
// Please do not modify this file. It will be re-generated
// running the code generator.
//--------------------------------------------------------------------------
#ifndef DOMAINHMI_COMMTRAFFICLIGHT_ACE_H_
#define DOMAINHMI_COMMTRAFFICLIGHT_ACE_H_

#include "DomainHMI/CommTrafficLight.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommTrafficLight
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHMIIDL::CommTrafficLight &data);

// de-serialization operator for DataStructure CommTrafficLight
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHMIIDL::CommTrafficLight &data);

// serialization operator for CommunicationObject CommTrafficLight
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainHMI::CommTrafficLight &obj);

// de-serialization operator for CommunicationObject CommTrafficLight
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainHMI::CommTrafficLight &obj);

#endif /* DOMAINHMI_COMMTRAFFICLIGHT_ACE_H_ */
