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
#include "CommTrackingObjects/CommLeaderEventParamACE.hh"
#include <ace/SString.h>
#include "CommTrackingObjects/enumLeaderEventTypeData.hh"

// serialization operator for element CommLeaderEventParam
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjectsIDL::CommLeaderEventParam &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element type
	good_bit = good_bit && cdr.write_long(data.type);
	
	return good_bit;
}

// de-serialization operator for element CommLeaderEventParam
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjectsIDL::CommLeaderEventParam &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element type
	good_bit = good_bit && cdr.read_long(data.type);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommLeaderEventParam
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommTrackingObjects::CommLeaderEventParam &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommLeaderEventParam
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommTrackingObjects::CommLeaderEventParam &obj)
{
	return cdr >> obj.set();
}
