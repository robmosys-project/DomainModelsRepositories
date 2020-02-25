#include "ROIOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommPerceptionOpcUa/CommPoint2dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::ROI
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::ROI *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add point
	ret->add(
		SelfDescription(&(obj->point), "Point")
	);
	// add width
	ret->add(
		SelfDescription(&(obj->width), "Width")
	);
	// add height
	ret->add(
		SelfDescription(&(obj->height), "Height")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
