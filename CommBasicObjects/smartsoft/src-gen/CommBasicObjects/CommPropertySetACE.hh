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
#ifndef COMMBASICOBJECTS_COMMPROPERTYSET_ACE_H_
#define COMMBASICOBJECTS_COMMPROPERTYSET_ACE_H_

#include "CommBasicObjects/CommPropertySet.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommPropertySet
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjectsIDL::CommPropertySet &data);

// de-serialization operator for DataStructure CommPropertySet
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjectsIDL::CommPropertySet &data);

// serialization operator for CommunicationObject CommPropertySet
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommBasicObjects::CommPropertySet &obj);

// de-serialization operator for CommunicationObject CommPropertySet
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommBasicObjects::CommPropertySet &obj);

#endif /* COMMBASICOBJECTS_COMMPROPERTYSET_ACE_H_ */
