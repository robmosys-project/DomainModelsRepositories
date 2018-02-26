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
#ifndef COMMBASICOBJECTS_COMMULTRASONICSCAN_CORE_H_
#define COMMBASICOBJECTS_COMMULTRASONICSCAN_CORE_H_

#include "CommBasicObjects/CommUltrasonicScanData.hh"
#include "CommBasicObjects/CommTimeStamp.hh"
#include "CommBasicObjects/CommPose3d.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommBasicObjects {
	
class CommUltrasonicScanCore {
protected:
	// data structure
	CommBasicObjectsIDL::CommUltrasonicScan idl_CommUltrasonicScan;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommBasicObjectsIDL::CommUltrasonicScan DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommUltrasonicScanCore();
	CommUltrasonicScanCore(const DATATYPE &data);
	// default destructor
	virtual ~CommUltrasonicScanCore();
	
	const DATATYPE& get() const { return idl_CommUltrasonicScan; }
	operator const DATATYPE&() const { return idl_CommUltrasonicScan; }
	DATATYPE& set() { return idl_CommUltrasonicScan; }

	static inline std::string identifier(void) { return "CommBasicObjects::CommUltrasonicScan"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element TimeStamp
	inline CommBasicObjects::CommTimeStamp getTimeStamp() const { return CommBasicObjects::CommTimeStamp(idl_CommUltrasonicScan.timeStamp); }
	inline CommUltrasonicScanCore& setTimeStamp(const CommBasicObjects::CommTimeStamp &timeStamp) { idl_CommUltrasonicScan.timeStamp = timeStamp; return *this; }
	
	// getter and setter for element ScanPoints
	/**
	 * Getter methods for element idl_CommUltrasonicScan.scanPoints of type vector<CommBasicObjects::CommPose3d>
	 */
	inline std::vector<CommBasicObjects::CommPose3d> getScanPointsCopy() const { 
		return std::vector<CommBasicObjects::CommPose3d>(idl_CommUltrasonicScan.scanPoints.begin(), idl_CommUltrasonicScan.scanPoints.end());
	}
	inline CommBasicObjects::CommPose3d getScanPointsElemAtPos(const size_t &pos) const {
		return CommBasicObjects::CommPose3d(idl_CommUltrasonicScan.scanPoints[pos]);
	}
	inline size_t getScanPointsSize() const { return idl_CommUltrasonicScan.scanPoints.size(); }
	inline bool isScanPointsEmpty() const { return idl_CommUltrasonicScan.scanPoints.empty(); }
	/**
	 * Setter methods for idl_CommUltrasonicScan.scanPoints of type vector<CommBasicObjects::CommPose3d>
	 */
	inline CommUltrasonicScanCore& setScanPoints(const std::vector<CommBasicObjects::CommPose3d> &scanPoints) { 
		idl_CommUltrasonicScan.scanPoints.assign(scanPoints.begin(), scanPoints.end());
		return *this;
	}
	inline bool setScanPointsElemAtPos(const size_t &pos, const CommBasicObjects::CommPose3d &elem) {
		if(pos < idl_CommUltrasonicScan.scanPoints.size()) {
			idl_CommUltrasonicScan.scanPoints[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertScanPointsVectorAtPos(const size_t &pos, const std::vector<CommBasicObjects::CommPose3d> &data) {
		if(pos < idl_CommUltrasonicScan.scanPoints.size()) {
			idl_CommUltrasonicScan.scanPoints.insert(idl_CommUltrasonicScan.scanPoints.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeScanPoints(const size_t &size) { idl_CommUltrasonicScan.scanPoints.resize(size); }
	inline bool eraseScanPointsElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommUltrasonicScan.scanPoints.size() ) {
			idl_CommUltrasonicScan.scanPoints.erase(idl_CommUltrasonicScan.scanPoints.begin()+pos, idl_CommUltrasonicScan.scanPoints.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearScanPoints() { idl_CommUltrasonicScan.scanPoints.clear(); }
	
	// getter and setter for element Intensities
	/**
	 * Getter methods for idl_CommUltrasonicScan.intensities of type vector<double>
	 */
	inline std::vector<double>& getIntensitiesRef() { return idl_CommUltrasonicScan.intensities; }
	inline std::vector<double> getIntensitiesCopy() const {
		return std::vector<double>(idl_CommUltrasonicScan.intensities.begin(), idl_CommUltrasonicScan.intensities.end());
	}
	inline double getIntensitiesElemAtPos(const size_t &pos) const { return idl_CommUltrasonicScan.intensities[pos]; }
	inline size_t getIntensitiesSize() const { return idl_CommUltrasonicScan.intensities.size(); }
	inline bool isIntensitiesEmpty() const { return idl_CommUltrasonicScan.intensities.empty(); }
	/**
	 * Setter methods for idl_CommUltrasonicScan.intensities of type vector<double>
	 */
	inline CommUltrasonicScanCore& setIntensities(const std::vector<double> &intensities) { idl_CommUltrasonicScan.intensities = intensities; return *this; }
	inline bool setIntensitiesElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommUltrasonicScan.intensities.size()) {
			idl_CommUltrasonicScan.intensities[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertIntensitiesVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommUltrasonicScan.intensities.size()) {
			idl_CommUltrasonicScan.intensities.insert(idl_CommUltrasonicScan.intensities.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeIntensities(const size_t &size) { idl_CommUltrasonicScan.intensities.resize(size); }
	inline bool eraseIntensitiesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommUltrasonicScan.intensities.size() ) {
			idl_CommUltrasonicScan.intensities.erase(idl_CommUltrasonicScan.intensities.begin()+pos, idl_CommUltrasonicScan.intensities.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearIntensities() { idl_CommUltrasonicScan.intensities.clear(); }
};

} /* namespace CommBasicObjects */
#endif /* COMMBASICOBJECTS_COMMULTRASONICSCAN_CORE_H_ */