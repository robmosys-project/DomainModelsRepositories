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
#include "CommLocalizationObjects/CommGpsFixACE.hh"
#include <ace/SString.h>

// serialization operator for element CommGpsFix
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjectsIDL::CommGpsFix &data)
{
	ACE_CDR::Boolean good_bit = true;
	// serialize list-element gps_timestamp
	good_bit = good_bit && cdr.write_double(data.gps_timestamp);
	// serialize list-element is_2D
	good_bit = good_bit && cdr.write_boolean(data.is_2D);
	// serialize list-element is_3D
	good_bit = good_bit && cdr.write_boolean(data.is_3D);
	// serialize list-element satellites_visible
	good_bit = good_bit && cdr.write_long(data.satellites_visible);
	// serialize list-element satellites_used
	good_bit = good_bit && cdr.write_long(data.satellites_used);
	// serialize list-element latitude
	good_bit = good_bit && cdr.write_double(data.latitude);
	// serialize list-element longitude
	good_bit = good_bit && cdr.write_double(data.longitude);
	// serialize list-element altitude
	good_bit = good_bit && cdr.write_double(data.altitude);
	// serialize list-element speed
	good_bit = good_bit && cdr.write_double(data.speed);
	// serialize list-element climb
	good_bit = good_bit && cdr.write_double(data.climb);
	// serialize list-element latitude_uncertainty
	good_bit = good_bit && cdr.write_double(data.latitude_uncertainty);
	// serialize list-element longitude_uncertainty
	good_bit = good_bit && cdr.write_double(data.longitude_uncertainty);
	// serialize list-element altitude_uncertainty
	good_bit = good_bit && cdr.write_double(data.altitude_uncertainty);
	// serialize list-element speed_uncertainty
	good_bit = good_bit && cdr.write_double(data.speed_uncertainty);
	// serialize list-element climb_uncertainty
	good_bit = good_bit && cdr.write_double(data.climb_uncertainty);
	
	return good_bit;
}

// de-serialization operator for element CommGpsFix
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjectsIDL::CommGpsFix &data)
{
	ACE_CDR::Boolean good_bit = true;
	// deserialize type element gps_timestamp
	good_bit = good_bit && cdr.read_double(data.gps_timestamp);
	// deserialize type element is_2D
	good_bit = good_bit && cdr.read_boolean(data.is_2D);
	// deserialize type element is_3D
	good_bit = good_bit && cdr.read_boolean(data.is_3D);
	// deserialize type element satellites_visible
	good_bit = good_bit && cdr.read_long(data.satellites_visible);
	// deserialize type element satellites_used
	good_bit = good_bit && cdr.read_long(data.satellites_used);
	// deserialize type element latitude
	good_bit = good_bit && cdr.read_double(data.latitude);
	// deserialize type element longitude
	good_bit = good_bit && cdr.read_double(data.longitude);
	// deserialize type element altitude
	good_bit = good_bit && cdr.read_double(data.altitude);
	// deserialize type element speed
	good_bit = good_bit && cdr.read_double(data.speed);
	// deserialize type element climb
	good_bit = good_bit && cdr.read_double(data.climb);
	// deserialize type element latitude_uncertainty
	good_bit = good_bit && cdr.read_double(data.latitude_uncertainty);
	// deserialize type element longitude_uncertainty
	good_bit = good_bit && cdr.read_double(data.longitude_uncertainty);
	// deserialize type element altitude_uncertainty
	good_bit = good_bit && cdr.read_double(data.altitude_uncertainty);
	// deserialize type element speed_uncertainty
	good_bit = good_bit && cdr.read_double(data.speed_uncertainty);
	// deserialize type element climb_uncertainty
	good_bit = good_bit && cdr.read_double(data.climb_uncertainty);
	
	return good_bit;
}

// serialization operator for CommunicationObject CommGpsFix
ACE_CDR::Boolean operator<<(ACE_OutputCDR &cdr, const CommLocalizationObjects::CommGpsFix &obj)
{
	return cdr << obj.get();
}

// de-serialization operator for CommunicationObject CommGpsFix
ACE_CDR::Boolean operator>>(ACE_InputCDR &cdr, CommLocalizationObjects::CommGpsFix &obj)
{
	return cdr >> obj.set();
}