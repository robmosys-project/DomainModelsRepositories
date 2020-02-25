#include "ColorOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommPerceptionOpcUa/HSVSpaceOpcUa.hh"
#include "CommPerceptionOpcUa/HSVSpaceOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::Color
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::Color *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add name
	ret->add(
		SelfDescription(&(obj->name), "Name")
	);
	// add min_range
	ret->add(
		SelfDescription(&(obj->min_range), "Min_range")
	);
	// add max_range
	ret->add(
		SelfDescription(&(obj->max_range), "Max_range")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
