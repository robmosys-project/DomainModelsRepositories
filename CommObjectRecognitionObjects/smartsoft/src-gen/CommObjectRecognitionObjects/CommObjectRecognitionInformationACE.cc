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
#include "CommObjectRecognitionObjects/CommObjectRecognitionInformationACE.hh"
#include <ace/SString.h>
#include "CommObjectRecognitionObjects/ColorACE.hh"
#include "CommObjectRecognitionObjects/ROIACE.hh"

// serialization operator for element CommObjectRecognitionInformation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjectsIDL::CommObjectRecognitionInformation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element id
	good_bit = good_bit && cdr.write_ulong(data.id);
	// serialize list-element roi
	good_bit = good_bit && cdr << data.roi;
	// serialize list-element color
	good_bit = good_bit && cdr << data.color;
	
	return good_bit;
}

// de-serialization operator for element CommObjectRecognitionInformation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjectsIDL::CommObjectRecognitionInformation &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element id
	good_bit = good_bit && cdr.read_ulong(data.id);
	// deserialize type element roi
	good_bit = good_bit && cdr >> data.roi;
	// deserialize type element color
	good_bit = good_bit && cdr >> data.color;
	
	return good_bit;
}

// serialization operator for CommunicationObject CommObjectRecognitionInformation
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommObjectRecognitionObjects::CommObjectRecognitionInformation &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommObjectRecognitionInformation
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommObjectRecognitionObjects::CommObjectRecognitionInformation &obj)
{
	return cdr >> obj.set();
}
