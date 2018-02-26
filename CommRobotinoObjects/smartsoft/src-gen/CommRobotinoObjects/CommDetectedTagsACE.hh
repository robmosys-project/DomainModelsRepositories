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
#ifndef COMMROBOTINOOBJECTS_COMMDETECTEDTAGS_ACE_H_
#define COMMROBOTINOOBJECTS_COMMDETECTEDTAGS_ACE_H_

#include "CommRobotinoObjects/CommDetectedTags.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommDetectedTags
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjectsIDL::CommDetectedTags &data);

// de-serialization operator for DataStructure CommDetectedTags
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjectsIDL::CommDetectedTags &data);

// serialization operator for CommunicationObject CommDetectedTags
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommRobotinoObjects::CommDetectedTags &obj);

// de-serialization operator for CommunicationObject CommDetectedTags
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommRobotinoObjects::CommDetectedTags &obj);

#endif /* COMMROBOTINOOBJECTS_COMMDETECTEDTAGS_ACE_H_ */