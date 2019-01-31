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
#ifndef COMMMANIPULATOROBJECTS_COMMGRIPPERTRAJECTORY_CORE_H_
#define COMMMANIPULATOROBJECTS_COMMGRIPPERTRAJECTORY_CORE_H_

#include "CommManipulatorObjects/CommGripperTrajectoryData.hh"
#include "CommManipulatorObjects/CommJointValues.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommManipulatorObjects {
	
class CommGripperTrajectoryCore {
protected:
	// data structure
	CommManipulatorObjectsIDL::CommGripperTrajectory idl_CommGripperTrajectory;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommManipulatorObjectsIDL::CommGripperTrajectory DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommGripperTrajectoryCore();
	CommGripperTrajectoryCore(const DATATYPE &data);
	// default destructor
	virtual ~CommGripperTrajectoryCore();
	
	const DATATYPE& get() const { return idl_CommGripperTrajectory; }
	operator const DATATYPE&() const { return idl_CommGripperTrajectory; }
	DATATYPE& set() { return idl_CommGripperTrajectory; }

	static inline std::string identifier(void) { return "CommManipulatorObjects::CommGripperTrajectory"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Joint_angles
	/**
	 * Getter methods for element idl_CommGripperTrajectory.joint_angles of type vector<CommManipulatorObjects::CommJointValues>
	 */
	inline std::vector<CommManipulatorObjects::CommJointValues> getJoint_anglesCopy() const { 
		return std::vector<CommManipulatorObjects::CommJointValues>(idl_CommGripperTrajectory.joint_angles.begin(), idl_CommGripperTrajectory.joint_angles.end());
	}
	inline CommManipulatorObjects::CommJointValues getJoint_anglesElemAtPos(const size_t &pos) const {
		return CommManipulatorObjects::CommJointValues(idl_CommGripperTrajectory.joint_angles[pos]);
	}
	inline size_t getJoint_anglesSize() const { return idl_CommGripperTrajectory.joint_angles.size(); }
	inline bool isJoint_anglesEmpty() const { return idl_CommGripperTrajectory.joint_angles.empty(); }
	/**
	 * Setter methods for idl_CommGripperTrajectory.joint_angles of type vector<CommManipulatorObjects::CommJointValues>
	 */
	inline CommGripperTrajectoryCore& setJoint_angles(const std::vector<CommManipulatorObjects::CommJointValues> &joint_angles) { 
		idl_CommGripperTrajectory.joint_angles.assign(joint_angles.begin(), joint_angles.end());
		return *this;
	}
	inline bool setJoint_anglesElemAtPos(const size_t &pos, const CommManipulatorObjects::CommJointValues &elem) {
		if(pos < idl_CommGripperTrajectory.joint_angles.size()) {
			idl_CommGripperTrajectory.joint_angles[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertJoint_anglesVectorAtPos(const size_t &pos, const std::vector<CommManipulatorObjects::CommJointValues> &data) {
		if(pos < idl_CommGripperTrajectory.joint_angles.size()) {
			idl_CommGripperTrajectory.joint_angles.insert(idl_CommGripperTrajectory.joint_angles.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeJoint_angles(const size_t &size) { idl_CommGripperTrajectory.joint_angles.resize(size); }
	inline bool eraseJoint_anglesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommGripperTrajectory.joint_angles.size() ) {
			idl_CommGripperTrajectory.joint_angles.erase(idl_CommGripperTrajectory.joint_angles.begin()+pos, idl_CommGripperTrajectory.joint_angles.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearJoint_angles() { idl_CommGripperTrajectory.joint_angles.clear(); }
};

} /* namespace CommManipulatorObjects */
#endif /* COMMMANIPULATOROBJECTS_COMMGRIPPERTRAJECTORY_CORE_H_ */
