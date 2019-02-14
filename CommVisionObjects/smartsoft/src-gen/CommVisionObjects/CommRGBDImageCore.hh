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
#ifndef COMMVISIONOBJECTS_COMMRGBDIMAGE_CORE_H_
#define COMMVISIONOBJECTS_COMMRGBDIMAGE_CORE_H_

#include "CommVisionObjects/CommRGBDImageData.hh"
#include "CommVisionObjects/CommDepthImage.hh"
#include "CommBasicObjects/CommPose3d.hh"
#include "CommBasicObjects/CommBaseState.hh"
#include "CommVisionObjects/CommVideoImage.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommVisionObjects {
	
class CommRGBDImageCore {
protected:
	// data structure
	CommVisionObjectsIDL::CommRGBDImage idl_CommRGBDImage;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommVisionObjectsIDL::CommRGBDImage DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommRGBDImageCore();
	CommRGBDImageCore(const DATATYPE &data);
	// default destructor
	virtual ~CommRGBDImageCore();
	
	const DATATYPE& get() const { return idl_CommRGBDImage; }
	operator const DATATYPE&() const { return idl_CommRGBDImage; }
	DATATYPE& set() { return idl_CommRGBDImage; }

	static inline std::string identifier(void) { return "CommVisionObjects::CommRGBDImage"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Color_image
	inline CommVisionObjects::CommVideoImage getColor_image() const { return CommVisionObjects::CommVideoImage(idl_CommRGBDImage.color_image); }
	inline CommRGBDImageCore& setColor_image(const CommVisionObjects::CommVideoImage &color_image) { idl_CommRGBDImage.color_image = color_image; return *this; }
	
	// getter and setter for element Depth_image
	inline CommVisionObjects::CommDepthImage getDepth_image() const { return CommVisionObjects::CommDepthImage(idl_CommRGBDImage.depth_image); }
	inline CommRGBDImageCore& setDepth_image(const CommVisionObjects::CommDepthImage &depth_image) { idl_CommRGBDImage.depth_image = depth_image; return *this; }
	
	// getter and setter for element Base_state
	inline CommBasicObjects::CommBaseState getBase_state() const { return CommBasicObjects::CommBaseState(idl_CommRGBDImage.base_state); }
	inline CommRGBDImageCore& setBase_state(const CommBasicObjects::CommBaseState &base_state) { idl_CommRGBDImage.base_state = base_state; return *this; }
	
	// getter and setter for element Sensor_pose
	inline CommBasicObjects::CommPose3d getSensor_pose() const { return CommBasicObjects::CommPose3d(idl_CommRGBDImage.sensor_pose); }
	inline CommRGBDImageCore& setSensor_pose(const CommBasicObjects::CommPose3d &sensor_pose) { idl_CommRGBDImage.sensor_pose = sensor_pose; return *this; }
	
	// getter and setter for element Seq_count
	inline unsigned int getSeq_count() const { return idl_CommRGBDImage.seq_count; }
	inline CommRGBDImageCore& setSeq_count(const unsigned int &seq_count) { idl_CommRGBDImage.seq_count = seq_count; return *this; }
	
	// getter and setter for element Is_valid
	inline bool getIs_valid() const { return idl_CommRGBDImage.is_valid; }
	inline CommRGBDImageCore& setIs_valid(const bool &is_valid) { idl_CommRGBDImage.is_valid = is_valid; return *this; }
};

} /* namespace CommVisionObjects */
#endif /* COMMVISIONOBJECTS_COMMRGBDIMAGE_CORE_H_ */