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
#ifndef DOMAINFORKLIFT_COMMFORKLIFTEVENTPARAMETER_ACE_H_
#define DOMAINFORKLIFT_COMMFORKLIFTEVENTPARAMETER_ACE_H_

#include "DomainForklift/CommForkliftEventParameter.hh"

#include <ace/CDR_Stream.h>

// serialization operator for DataStructure CommForkliftEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainForkliftIDL::CommForkliftEventParameter &data);

// de-serialization operator for DataStructure CommForkliftEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainForkliftIDL::CommForkliftEventParameter &data);

// serialization operator for CommunicationObject CommForkliftEventParameter
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const DomainForklift::CommForkliftEventParameter &obj);

// de-serialization operator for CommunicationObject CommForkliftEventParameter
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, DomainForklift::CommForkliftEventParameter &obj);

#endif /* DOMAINFORKLIFT_COMMFORKLIFTEVENTPARAMETER_ACE_H_ */
