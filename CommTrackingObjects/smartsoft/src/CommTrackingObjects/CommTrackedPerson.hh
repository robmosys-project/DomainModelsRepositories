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
#ifndef COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_H_
#define COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_H_

#include "CommTrackingObjects/CommTrackedPersonCore.hh"

namespace CommTrackingObjects {
		
class CommTrackedPerson : public CommTrackedPersonCore {
	public:
		// default constructors
		CommTrackedPerson();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommTrackedPerson(const unsigned int &id, const double &x, const double &y, const double &z = 0.0);
		
		CommTrackedPerson(const CommTrackedPersonCore &commTrackedPerson);
		CommTrackedPerson(const DATATYPE &commTrackedPerson);
		virtual ~CommTrackedPerson();
		
		// use framework specific getter and setter methods from core (base) class
		using CommTrackedPersonCore::get;
		using CommTrackedPersonCore::set;
		
		//
		// feel free to add customized methods here
		//
};

inline std::ostream &operator<<(std::ostream &os, const CommTrackedPerson &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommTrackingObjects */
#endif /* COMMTRACKINGOBJECTS_COMMTRACKEDPERSON_H_ */
