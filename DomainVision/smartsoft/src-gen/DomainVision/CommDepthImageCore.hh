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
#ifndef DOMAINVISION_COMMDEPTHIMAGE_CORE_H_
#define DOMAINVISION_COMMDEPTHIMAGE_CORE_H_

#include "DomainVision/CommDepthImageData.hh"
#include "DomainVision/enumImageDistortionModel.hh"
#include "DomainVision/enumDepthFormatType.hh"

#include <iostream>
#include <string>
#include <list>

namespace DomainVision {
	
class CommDepthImageCore {
protected:
	// data structure
	DomainVisionIDL::CommDepthImage idl_CommDepthImage;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef DomainVisionIDL::CommDepthImage DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommDepthImageCore();
	CommDepthImageCore(const DATATYPE &data);
	// default destructor
	virtual ~CommDepthImageCore();
	
	const DATATYPE& get() const { return idl_CommDepthImage; }
	operator const DATATYPE&() const { return idl_CommDepthImage; }
	DATATYPE& set() { return idl_CommDepthImage; }

	static inline std::string identifier(void) { return "DomainVision::CommDepthImage"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Width
	inline unsigned int getWidth() const { return idl_CommDepthImage.width; }
	inline CommDepthImageCore& setWidth(const unsigned int &width) { idl_CommDepthImage.width = width; return *this; }
	
	// getter and setter for element Height
	inline unsigned int getHeight() const { return idl_CommDepthImage.height; }
	inline CommDepthImageCore& setHeight(const unsigned int &height) { idl_CommDepthImage.height = height; return *this; }
	
	// getter and setter for element Format
	inline DomainVision::DepthFormatType getFormat() const { return DomainVision::DepthFormatType(idl_CommDepthImage.format); }
	inline CommDepthImageCore& setFormat(const DomainVision::DepthFormatType &format) { idl_CommDepthImage.format = format; return *this; }
	
	// getter and setter for element Pixel_size
	inline unsigned int getPixel_size() const { return idl_CommDepthImage.pixel_size; }
	inline CommDepthImageCore& setPixel_size(const unsigned int &pixel_size) { idl_CommDepthImage.pixel_size = pixel_size; return *this; }
	
	// getter and setter for element Min_distcance
	inline double getMin_distcance() const { return idl_CommDepthImage.min_distcance; }
	inline CommDepthImageCore& setMin_distcance(const double &min_distcance) { idl_CommDepthImage.min_distcance = min_distcance; return *this; }
	
	// getter and setter for element Max_distcance
	inline double getMax_distcance() const { return idl_CommDepthImage.max_distcance; }
	inline CommDepthImageCore& setMax_distcance(const double &max_distcance) { idl_CommDepthImage.max_distcance = max_distcance; return *this; }
	
	// getter and setter for element Data
	/**
	 * Getter methods for idl_CommDepthImage.data of type vector<unsigned char>
	 */
	inline std::vector<unsigned char>& getDataRef() { return idl_CommDepthImage.data; }
	inline std::vector<unsigned char> getDataCopy() const {
		return std::vector<unsigned char>(idl_CommDepthImage.data.begin(), idl_CommDepthImage.data.end());
	}
	inline unsigned char getDataElemAtPos(const size_t &pos) const { return idl_CommDepthImage.data[pos]; }
	inline size_t getDataSize() const { return idl_CommDepthImage.data.size(); }
	inline bool isDataEmpty() const { return idl_CommDepthImage.data.empty(); }
	/**
	 * Setter methods for idl_CommDepthImage.data of type vector<unsigned char>
	 */
	inline CommDepthImageCore& setData(const std::vector<unsigned char> &data) { idl_CommDepthImage.data = data; return *this; }
	inline bool setDataElemAtPos(const size_t &pos, const unsigned char &elem) {
		if(pos < idl_CommDepthImage.data.size()) {
			idl_CommDepthImage.data[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDataVectorAtPos(const size_t &pos, const std::vector<unsigned char> &data) {
		if(pos < idl_CommDepthImage.data.size()) {
			idl_CommDepthImage.data.insert(idl_CommDepthImage.data.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeData(const size_t &size) { idl_CommDepthImage.data.resize(size); }
	inline bool eraseDataElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDepthImage.data.size() ) {
			idl_CommDepthImage.data.erase(idl_CommDepthImage.data.begin()+pos, idl_CommDepthImage.data.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearData() { idl_CommDepthImage.data.clear(); }
	
	// getter and setter for element Scale
	inline double getScale() const { return idl_CommDepthImage.scale; }
	inline CommDepthImageCore& setScale(const double &scale) { idl_CommDepthImage.scale = scale; return *this; }
	
	// getter and setter for element Intrinsic_m
	/**
	 * Getter methods for idl_CommDepthImage.intrinsic_m of type vector<double>
	 */
	inline std::vector<double>& getIntrinsic_mRef() { return idl_CommDepthImage.intrinsic_m; }
	inline std::vector<double> getIntrinsic_mCopy() const {
		return std::vector<double>(idl_CommDepthImage.intrinsic_m.begin(), idl_CommDepthImage.intrinsic_m.end());
	}
	inline double getIntrinsic_mElemAtPos(const size_t &pos) const { return idl_CommDepthImage.intrinsic_m[pos]; }
	inline size_t getIntrinsic_mSize() const { return idl_CommDepthImage.intrinsic_m.size(); }
	inline bool isIntrinsic_mEmpty() const { return idl_CommDepthImage.intrinsic_m.empty(); }
	/**
	 * Setter methods for idl_CommDepthImage.intrinsic_m of type vector<double>
	 */
	inline CommDepthImageCore& setIntrinsic_m(const std::vector<double> &intrinsic_m) { idl_CommDepthImage.intrinsic_m = intrinsic_m; return *this; }
	inline bool setIntrinsic_mElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommDepthImage.intrinsic_m.size()) {
			idl_CommDepthImage.intrinsic_m[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertIntrinsic_mVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommDepthImage.intrinsic_m.size()) {
			idl_CommDepthImage.intrinsic_m.insert(idl_CommDepthImage.intrinsic_m.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeIntrinsic_m(const size_t &size) { idl_CommDepthImage.intrinsic_m.resize(size); }
	inline bool eraseIntrinsic_mElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDepthImage.intrinsic_m.size() ) {
			idl_CommDepthImage.intrinsic_m.erase(idl_CommDepthImage.intrinsic_m.begin()+pos, idl_CommDepthImage.intrinsic_m.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearIntrinsic_m() { idl_CommDepthImage.intrinsic_m.clear(); }
	
	// getter and setter for element Extrinsic_m
	/**
	 * Getter methods for idl_CommDepthImage.extrinsic_m of type vector<double>
	 */
	inline std::vector<double>& getExtrinsic_mRef() { return idl_CommDepthImage.extrinsic_m; }
	inline std::vector<double> getExtrinsic_mCopy() const {
		return std::vector<double>(idl_CommDepthImage.extrinsic_m.begin(), idl_CommDepthImage.extrinsic_m.end());
	}
	inline double getExtrinsic_mElemAtPos(const size_t &pos) const { return idl_CommDepthImage.extrinsic_m[pos]; }
	inline size_t getExtrinsic_mSize() const { return idl_CommDepthImage.extrinsic_m.size(); }
	inline bool isExtrinsic_mEmpty() const { return idl_CommDepthImage.extrinsic_m.empty(); }
	/**
	 * Setter methods for idl_CommDepthImage.extrinsic_m of type vector<double>
	 */
	inline CommDepthImageCore& setExtrinsic_m(const std::vector<double> &extrinsic_m) { idl_CommDepthImage.extrinsic_m = extrinsic_m; return *this; }
	inline bool setExtrinsic_mElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommDepthImage.extrinsic_m.size()) {
			idl_CommDepthImage.extrinsic_m[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertExtrinsic_mVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommDepthImage.extrinsic_m.size()) {
			idl_CommDepthImage.extrinsic_m.insert(idl_CommDepthImage.extrinsic_m.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeExtrinsic_m(const size_t &size) { idl_CommDepthImage.extrinsic_m.resize(size); }
	inline bool eraseExtrinsic_mElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDepthImage.extrinsic_m.size() ) {
			idl_CommDepthImage.extrinsic_m.erase(idl_CommDepthImage.extrinsic_m.begin()+pos, idl_CommDepthImage.extrinsic_m.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearExtrinsic_m() { idl_CommDepthImage.extrinsic_m.clear(); }
	
	// getter and setter for element Stereo_m
	/**
	 * Getter methods for idl_CommDepthImage.stereo_m of type vector<double>
	 */
	inline std::vector<double>& getStereo_mRef() { return idl_CommDepthImage.stereo_m; }
	inline std::vector<double> getStereo_mCopy() const {
		return std::vector<double>(idl_CommDepthImage.stereo_m.begin(), idl_CommDepthImage.stereo_m.end());
	}
	inline double getStereo_mElemAtPos(const size_t &pos) const { return idl_CommDepthImage.stereo_m[pos]; }
	inline size_t getStereo_mSize() const { return idl_CommDepthImage.stereo_m.size(); }
	inline bool isStereo_mEmpty() const { return idl_CommDepthImage.stereo_m.empty(); }
	/**
	 * Setter methods for idl_CommDepthImage.stereo_m of type vector<double>
	 */
	inline CommDepthImageCore& setStereo_m(const std::vector<double> &stereo_m) { idl_CommDepthImage.stereo_m = stereo_m; return *this; }
	inline bool setStereo_mElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommDepthImage.stereo_m.size()) {
			idl_CommDepthImage.stereo_m[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertStereo_mVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommDepthImage.stereo_m.size()) {
			idl_CommDepthImage.stereo_m.insert(idl_CommDepthImage.stereo_m.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeStereo_m(const size_t &size) { idl_CommDepthImage.stereo_m.resize(size); }
	inline bool eraseStereo_mElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDepthImage.stereo_m.size() ) {
			idl_CommDepthImage.stereo_m.erase(idl_CommDepthImage.stereo_m.begin()+pos, idl_CommDepthImage.stereo_m.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearStereo_m() { idl_CommDepthImage.stereo_m.clear(); }
	
	// getter and setter for element Distortion_m
	/**
	 * Getter methods for idl_CommDepthImage.distortion_m of type vector<double>
	 */
	inline std::vector<double>& getDistortion_mRef() { return idl_CommDepthImage.distortion_m; }
	inline std::vector<double> getDistortion_mCopy() const {
		return std::vector<double>(idl_CommDepthImage.distortion_m.begin(), idl_CommDepthImage.distortion_m.end());
	}
	inline double getDistortion_mElemAtPos(const size_t &pos) const { return idl_CommDepthImage.distortion_m[pos]; }
	inline size_t getDistortion_mSize() const { return idl_CommDepthImage.distortion_m.size(); }
	inline bool isDistortion_mEmpty() const { return idl_CommDepthImage.distortion_m.empty(); }
	/**
	 * Setter methods for idl_CommDepthImage.distortion_m of type vector<double>
	 */
	inline CommDepthImageCore& setDistortion_m(const std::vector<double> &distortion_m) { idl_CommDepthImage.distortion_m = distortion_m; return *this; }
	inline bool setDistortion_mElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommDepthImage.distortion_m.size()) {
			idl_CommDepthImage.distortion_m[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertDistortion_mVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommDepthImage.distortion_m.size()) {
			idl_CommDepthImage.distortion_m.insert(idl_CommDepthImage.distortion_m.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeDistortion_m(const size_t &size) { idl_CommDepthImage.distortion_m.resize(size); }
	inline bool eraseDistortion_mElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommDepthImage.distortion_m.size() ) {
			idl_CommDepthImage.distortion_m.erase(idl_CommDepthImage.distortion_m.begin()+pos, idl_CommDepthImage.distortion_m.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearDistortion_m() { idl_CommDepthImage.distortion_m.clear(); }
	
	// getter and setter for element Distortion_model
	inline DomainVision::ImageDistortionModel getDistortion_model() const { return DomainVision::ImageDistortionModel(idl_CommDepthImage.distortion_model); }
	inline CommDepthImageCore& setDistortion_model(const DomainVision::ImageDistortionModel &distortion_model) { idl_CommDepthImage.distortion_model = distortion_model; return *this; }
	
	// getter and setter for element Seq_count
	inline unsigned int getSeq_count() const { return idl_CommDepthImage.seq_count; }
	inline CommDepthImageCore& setSeq_count(const unsigned int &seq_count) { idl_CommDepthImage.seq_count = seq_count; return *this; }
	
	// getter and setter for element Is_valid
	inline bool getIs_valid() const { return idl_CommDepthImage.is_valid; }
	inline CommDepthImageCore& setIs_valid(const bool &is_valid) { idl_CommDepthImage.is_valid = is_valid; return *this; }
};

} /* namespace DomainVision */
#endif /* DOMAINVISION_COMMDEPTHIMAGE_CORE_H_ */
