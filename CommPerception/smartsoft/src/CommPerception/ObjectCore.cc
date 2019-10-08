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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------

#include "CommPerception/ObjectCore.hh"

using namespace CommPerception;

ObjectCore::ObjectCore()
:	ObjectCoreCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
ObjectCore::ObjectCore(const bool &is_valid, const unsigned int &object_id, const std::string &object_type, const CommPerception::CommPoint2d &point2d, const CommBasicObjects::CommPose3d &pose, const CommObjectRecognitionObjects::CommObjectRelation &relations, const CommBasicObjects::CommPose3d &surface_poses, const double &fill_level)
:	ObjectCoreCore() // base constructor sets default values as defined in the model
{
	setIs_valid(is_valid);
	setObject_id(object_id);
	setObject_type(object_type);
	setPoint2d(point2d);
	setPose(pose);
	setRelations(relations);
	setFill_level(fill_level);
	setSurface_poses(surface_poses);
}
 */

ObjectCore::ObjectCore(const ObjectCoreCore &objectCore)
:	ObjectCoreCore(objectCore)
{  }

ObjectCore::ObjectCore(const DATATYPE &objectCore)
:	ObjectCoreCore(objectCore)
{  }

ObjectCore::~ObjectCore()
{  }