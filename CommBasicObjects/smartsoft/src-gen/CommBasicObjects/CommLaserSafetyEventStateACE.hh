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
#ifndef COMMBASICOBJECTS_COMMLASERSAFETYEVENTSTATE_ACE_H_
#define COMMBASICOBJECTS_COMMLASERSAFETYEVENTSTATE_ACE_H_

#include "CommBasicObjects/CommLaserSafetyEventState.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommLaserSafetyEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommLaserSafetyEventState &data);

// de-serialization operator for DataStructure CommLaserSafetyEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommLaserSafetyEventState &data);

// serialization operator for CommunicationObject CommLaserSafetyEventState
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommLaserSafetyEventState &obj);

// de-serialization operator for CommunicationObject CommLaserSafetyEventState
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommLaserSafetyEventState &obj);

#endif /* COMMBASICOBJECTS_COMMLASERSAFETYEVENTSTATE_ACE_H_ */