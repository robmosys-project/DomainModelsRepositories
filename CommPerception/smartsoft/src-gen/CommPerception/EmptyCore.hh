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
#ifndef COMMPERCEPTION_EMPTY_CORE_H_
#define COMMPERCEPTION_EMPTY_CORE_H_

#include "CommPerception/EmptyData.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommPerception {
	
class EmptyCore {
protected:
	// data structure
	CommPerceptionIDL::Empty idl_Empty;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommPerceptionIDL::Empty DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	EmptyCore();
	EmptyCore(const DATATYPE &data);
	// default destructor
	virtual ~EmptyCore();
	
	const DATATYPE& get() const { return idl_Empty; }
	operator const DATATYPE&() const { return idl_Empty; }
	DATATYPE& set() { return idl_Empty; }

	static inline std::string identifier(void) { return "CommPerception::Empty"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
};

} /* namespace CommPerception */
#endif /* COMMPERCEPTION_EMPTY_CORE_H_ */
