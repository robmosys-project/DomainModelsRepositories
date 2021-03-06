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
#include "CommPerception/EmptyACE.hh"
#include <ace/SString.h>

// serialization operator for element Empty
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerceptionIDL::Empty &data)
{
	ACE_CDR::Boolean good_bit = true;
	
	return good_bit;
}

// de-serialization operator for element Empty
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerceptionIDL::Empty &data)
{
	ACE_CDR::Boolean good_bit = true;
	
	return good_bit;
}

// serialization operator for CommunicationObject Empty
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommPerception::Empty &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject Empty
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommPerception::Empty &obj)
{
	return cdr >> obj.set();
}
