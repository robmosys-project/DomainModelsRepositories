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
#ifndef COMMTRACKINGOBJECTS_SCANMODE_ENUM_H_
#define COMMTRACKINGOBJECTS_SCANMODE_ENUM_H_

#include <CommTrackingObjects/enumScanModeData.hh>

#include <string>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

namespace CommTrackingObjects {
	
	class ScanMode {
	private:
		CommTrackingObjectsIDL::ScanMode value;
		
	public:
		enum ENUM_ScanMode {
			ENUM_VALUE_UNDEFINED = 0,
			NONE_SCAN_MODE = 1,
			CONTINUOUS = 2,
			ONE_SHOT = 3
		};
		
		// default constructor
		ScanMode() { 
			value = ENUM_VALUE_UNDEFINED;
		}
		
		// copy constructor for enum type
		ScanMode(ENUM_ScanMode e) {
			value = static_cast<int>(e);
		}
		
		// copy constructor for IDL type
		ScanMode(CommTrackingObjectsIDL::ScanMode e) {
			value = e;
		}
		
		//const CommTrackingObjectsIDL::ScanMode& get() const { return value; }
		
		// ENUM operator
		operator ENUM_ScanMode() const {
			return static_cast<ENUM_ScanMode>(value);
		}
		
		// compare operator
		bool operator == (const ENUM_ScanMode t) const {
			return this->value == t;
		}
		
		std::string to_string() const {
			std::string result = "";
			switch (value) {
				case NONE_SCAN_MODE:
					result = "ScanMode::NONE_SCAN_MODE";
					break;
				case CONTINUOUS:
					result = "ScanMode::CONTINUOUS";
					break;
				case ONE_SHOT:
					result = "ScanMode::ONE_SHOT";
					break;
				default:
					result = "ENUM_VALUE_UNDEFINED";
					break;
			};
			return result;
		}
		
		// helper method to easily implement output stream
		void to_ostream(std::ostream &os = std::cout) const {
			os << to_string();
		}
		
		// convert to xml stream
		void to_xml(std::ostream &os, const std::string &indent = "") const {
			os << indent << "<value>" << value << "</value>";
		}
		
		// restore from xml stream
		void from_xml(std::istream &is) {
			static const Smart::KnuthMorrisPratt kmp_value("<value>");
			if(kmp_value.search(is)) {
				is >> value;
			}
		}
	
	};
	
	inline std::ostream &operator<<(std::ostream &os, const ScanMode &e)
	{
		e.to_ostream(os);
		return os;
	}
};

#endif
