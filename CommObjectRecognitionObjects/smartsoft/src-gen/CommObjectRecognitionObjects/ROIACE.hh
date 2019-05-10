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
#ifndef COMMOBJECTRECOGNITIONOBJECTS_ROI_ACE_H_
#define COMMOBJECTRECOGNITIONOBJECTS_ROI_ACE_H_

#include "CommObjectRecognitionObjects/ROI.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure ROI
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::ROI &data);

// de-serialization operator for DataStructure ROI
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::ROI &data);

// serialization operator for CommunicationObject ROI
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::ROI &obj);

// de-serialization operator for CommunicationObject ROI
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::ROI &obj);

#endif /* COMMOBJECTRECOGNITIONOBJECTS_ROI_ACE_H_ */
