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
#ifndef COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_DATA_H_
#define COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_DATA_H_

#include "CommManipulatorObjects/enumGripperEventData.hh"


namespace CommManipulatorObjectsIDL 
{
	struct CommGripperEvent
	{
		CommManipulatorObjectsIDL::GripperEvent gripper_event;
		float pos;
  	};
};

#endif /* COMMMANIPULATOROBJECTS_COMMGRIPPEREVENT_DATA_H_ */