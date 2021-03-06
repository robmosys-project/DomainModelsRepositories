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
#ifndef COMMPERCEPTION_COMMLABEL_CORE_H_
#define COMMPERCEPTION_COMMLABEL_CORE_H_

#include "CommPerception/CommLabelData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommPerception {
	
class CommLabelCore {
protected:
	// data structure
	CommPerceptionIDL::CommLabel idl_CommLabel;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommPerceptionIDL::CommLabel DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommLabelCore();
	CommLabelCore(const DATATYPE &data);
	// default destructor
	virtual ~CommLabelCore();
	
	const DATATYPE& get() const { return idl_CommLabel; }
	operator const DATATYPE&() const { return idl_CommLabel; }
	DATATYPE& set() { return idl_CommLabel; }

	static inline std::string identifier(void) { return "CommPerception::CommLabel"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Name
	inline std::string getName() const { return idl_CommLabel.name; }
	inline CommLabelCore& setName(const std::string &name) { idl_CommLabel.name = name; return *this; }
};

} /* namespace CommPerception */
#endif /* COMMPERCEPTION_COMMLABEL_CORE_H_ */
