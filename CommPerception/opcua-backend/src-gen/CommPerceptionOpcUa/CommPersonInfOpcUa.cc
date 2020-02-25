#include "CommPersonInfOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommPerceptionOpcUa/ROIOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::CommPersonInf
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::CommPersonInf *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add pose
	ret->add(
		SelfDescription(&(obj->pose), "Pose")
	);
	// add name
	ret->add(
		SelfDescription(&(obj->name), "Name")
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
