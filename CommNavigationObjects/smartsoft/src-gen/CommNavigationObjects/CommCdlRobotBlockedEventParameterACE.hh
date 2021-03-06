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
#ifndef COMMNAVIGATIONOBJECTS_COMMCDLROBOTBLOCKEDEVENTPARAMETER_ACE_H_
#define COMMNAVIGATIONOBJECTS_COMMCDLROBOTBLOCKEDEVENTPARAMETER_ACE_H_

#include "CommNavigationObjects/CommCdlRobotBlockedEventParameter.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommCdlRobotBlockedEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommNavigationObjectsIDL::CommCdlRobotBlockedEventParameter &data);

// de-serialization operator for DataStructure CommCdlRobotBlockedEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommNavigationObjectsIDL::CommCdlRobotBlockedEventParameter &data);

// serialization operator for CommunicationObject CommCdlRobotBlockedEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommNavigationObjects::CommCdlRobotBlockedEventParameter &obj);

// de-serialization operator for CommunicationObject CommCdlRobotBlockedEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommNavigationObjects::CommCdlRobotBlockedEventParameter &obj);

#endif /* COMMNAVIGATIONOBJECTS_COMMCDLROBOTBLOCKEDEVENTPARAMETER_ACE_H_ */
