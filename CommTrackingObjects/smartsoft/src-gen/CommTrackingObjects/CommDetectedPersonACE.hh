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
#ifndef COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_ACE_H_
#define COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_ACE_H_

#include "CommTrackingObjects/CommDetectedPerson.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommDetectedPerson
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::CommDetectedPerson &data);

// de-serialization operator for DataStructure CommDetectedPerson
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::CommDetectedPerson &data);

// serialization operator for CommunicationObject CommDetectedPerson
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::CommDetectedPerson &obj);

// de-serialization operator for CommunicationObject CommDetectedPerson
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::CommDetectedPerson &obj);

#endif /* COMMTRACKINGOBJECTS_COMMDETECTEDPERSON_ACE_H_ */