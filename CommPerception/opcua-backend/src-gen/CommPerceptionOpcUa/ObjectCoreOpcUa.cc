#include "ObjectCoreOpcUa.hh"

#define SERONET_NO_DEPRECATED
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ComplexType.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementPrimitives.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/SelfDescriptionArray.hpp>
#include <SeRoNetSDK/SeRoNet/CommunicationObjects/Description/ElementArray.hpp>

#include "CommPerceptionOpcUa/CommPoint2dOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"
#include "CommObjectRecognitionObjectsOpcUa/CommObjectRelationOpcUa.hh"
#include "CommBasicObjectsOpcUa/CommPose3dOpcUa.hh"

namespace SeRoNet {
namespace CommunicationObjects {
namespace Description {
	
// serialization for CommPerceptionIDL::ObjectCore
template <>
IDescription::shp_t SelfDescription(CommPerceptionIDL::ObjectCore *obj, std::string name)
{
	auto ret = std::make_shared<SeRoNet::CommunicationObjects::Description::ComplexType>(name);
	// add is_valid
	ret->add(
		SelfDescription(&(obj->is_valid), "Is_valid")
	);
	// add object_id
	ret->add(
		SelfDescription(&(obj->object_id), "Object_id")
	);
	// add object_type
	ret->add(
		SelfDescription(&(obj->object_type), "Object_type")
	);
	// add point2d
	ret->add(
		SelfDescription(&(obj->point2d), "Point2d")
	);
	// add pose
	ret->add(
		SelfDescription(&(obj->pose), "Pose")
	);
	// add relations
	ret->add(
		SelfDescription(&(obj->relations), "Relations")
	);
	// add fill_level
	ret->add(
		SelfDescription(&(obj->fill_level), "Fill_level")
	);
	// add surface_poses
	ret->add(
		SelfDescription(&(obj->surface_poses), "Surface_poses")
	);
	return ret;
} // end SelfDescription

} // end namespace Description
} // end namespace CommunicationObjects
} // end namespace SeRoNet
