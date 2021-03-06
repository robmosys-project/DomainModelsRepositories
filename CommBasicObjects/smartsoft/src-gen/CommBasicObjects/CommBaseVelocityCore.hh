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
#ifndef COMMBASICOBJECTS_COMMBASEVELOCITY_CORE_H_
#define COMMBASICOBJECTS_COMMBASEVELOCITY_CORE_H_

#include "CommBasicObjects/CommBaseVelocityData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommBaseVelocityCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommBaseVelocity idl_CommBaseVelocity;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommBaseVelocity DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommBaseVelocityCore();
	CommBaseVelocityCore(const DATATYPE &data);
	// default destructor
	virtual ~CommBaseVelocityCore();
	
	const DATATYPE& get() const { return idl_CommBaseVelocity; }
	operator const DATATYPE&() const { return idl_CommBaseVelocity; }
	DATATYPE& set() { return idl_CommBaseVelocity; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommBaseVelocity"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element VX
	inline double getVX() const { return idl_CommBaseVelocity.vX; }
	inline CommBaseVelocityCore& setVX(const double &vX) { idl_CommBaseVelocity.vX = vX; return *this; }
	
	// getter and setter for element VY
	inline double getVY() const { return idl_CommBaseVelocity.vY; }
	inline CommBaseVelocityCore& setVY(const double &vY) { idl_CommBaseVelocity.vY = vY; return *this; }
	
	// getter and setter for element VZ
	inline double getVZ() const { return idl_CommBaseVelocity.vZ; }
	inline CommBaseVelocityCore& setVZ(const double &vZ) { idl_CommBaseVelocity.vZ = vZ; return *this; }
	
	// getter and setter for element WX
	inline double getWX() const { return idl_CommBaseVelocity.wX; }
	inline CommBaseVelocityCore& setWX(const double &wX) { idl_CommBaseVelocity.wX = wX; return *this; }
	
	// getter and setter for element WY
	inline double getWY() const { return idl_CommBaseVelocity.wY; }
	inline CommBaseVelocityCore& setWY(const double &wY) { idl_CommBaseVelocity.wY = wY; return *this; }
	
	// getter and setter for element WZ
	inline double getWZ() const { return idl_CommBaseVelocity.wZ; }
	inline CommBaseVelocityCore& setWZ(const double &wZ) { idl_CommBaseVelocity.wZ = wZ; return *this; }
	
	// getter and setter for element TimeStamp
	inline CommBasicObjects::CommTimeStamp getTimeStamp() const { return CommBasicObjects::CommTimeStamp(idl_CommBaseVelocity.timeStamp); }
	inline CommBaseVelocityCore& setTimeStamp(const CommBasicObjects::CommTimeStamp &timeStamp) { idl_CommBaseVelocity.timeStamp = timeStamp; return *this; }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMBASEVELOCITY_CORE_H_ */
