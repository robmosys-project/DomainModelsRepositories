#include "CommInfDetectionOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommPerceptionOpcUa/ShapeOpcUa.hh"
#include "CommPerceptionOpcUa/ColorOpcUa.hh"
#include "CommPerceptionOpcUa/ROIOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::CommInfDetection
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::CommInfDetection *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add shape
	ret->add(
		SelfDescription(&(obj->shape), "Shape")
	);
	// add color
	ret->add(
		SelfDescription(&(obj->color), "Color")
	);
	// add roi
	ret->add(
		SelfDescription(&(obj->roi), "Roi")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
