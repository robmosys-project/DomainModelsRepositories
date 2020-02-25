#include "BoxOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPosition3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::Box
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::Box *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add p1
	ret->add(
		SelfDescription(&(obj->p1), "P1")
	);
	// add p2
	ret->add(
		SelfDescription(&(obj->p2), "P2")
	);
	// add p3
	ret->add(
		SelfDescription(&(obj->p3), "P3")
	);
	// add p4
	ret->add(
		SelfDescription(&(obj->p4), "P4")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
