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
#include "CommBasicObjects/CommBasePoseCore.hh"

// serialization/deserialization operators
//#include "CommBasicObjects/CommBasePoseACE.hh"

// include the hash.idl containing the hash constant
#include "hash.hh"
#include <assert.h>
#include <cstring>
#include <iostream>

// SmartUtils used in from_xml method
#include "smartKnuthMorrisPratt.hh"

#ifdef ENABLE_HASH
	#include <boost/functional/hash.hpp>
#endif

namespace CommBasicObjects 
{
	const char* CommBasePoseCore::getCompiledHash()
	{
		return CommBasicObjectsIDL::REPO_HASH;
	}
	
	void CommBasePoseCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPose3d(idl_CommBasePose.pose3D)
		CommBasicObjects::CommPose3d::getAllHashValues(hashes);
		// get hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommBasePose.timeStamp)
		CommBasicObjects::CommTimeStamp::getAllHashValues(hashes);
	}
	
	void CommBasePoseCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommBasePoseCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPose3d(idl_CommBasePose.pose3D)
		CommBasicObjects::CommPose3d::checkAllHashValues(hashes);
		// check hash value(s) for CommBasicObjects::CommTimeStamp(idl_CommBasePose.timeStamp)
		CommBasicObjects::CommTimeStamp::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommBasePoseCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.covInvalid);
		std::vector<ACE_CDR::Double>::const_iterator data_covMatrixIt;
		for(data_covMatrixIt=data.covMatrix.begin(); data_covMatrixIt!=data.covMatrix.end(); data_covMatrixIt++) {
			boost::hash_combine(seed, *data_covMatrixIt);
		}
		boost::hash_combine(seed, data.updateCount);
		seed += CommBasicObjects::CommPose3d::generateDataHash(data.pose3D);
		seed += CommBasicObjects::CommTimeStamp::generateDataHash(data.timeStamp);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommBasePoseCore::CommBasePoseCore()
	:	idl_CommBasePose()
	{  
		setCovInvalid(false);
		setCovMatrix(std::vector<double>(9, 0.0));
		setUpdateCount(0);
		setPose3D(CommBasicObjects::CommPose3d());
		setTimeStamp(CommBasicObjects::CommTimeStamp());
	}
	
	CommBasePoseCore::CommBasePoseCore(const DATATYPE &data)
	:	idl_CommBasePose(data)
	{  }

	CommBasePoseCore::~CommBasePoseCore()
	{  }
	
	void CommBasePoseCore::to_ostream(std::ostream &os) const
	{
	  os << "CommBasePose(";
	  os << getCovInvalid() << " ";
	  std::vector<double>::const_iterator covMatrixIt;
	  std::vector<double> covMatrixList = getCovMatrixCopy();
	  for(covMatrixIt=covMatrixList.begin(); covMatrixIt!=covMatrixList.end(); covMatrixIt++) {
	  	os << *covMatrixIt << " ";
	  }
	  os << getUpdateCount() << " ";
	  getPose3D().to_ostream(os);
	  getTimeStamp().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommBasePoseCore::to_xml(std::ostream &os, const std::string &indent) const {
		size_t counter = 0;
		
		os << indent << "<covInvalid>" << getCovInvalid() << "</covInvalid>";
		std::vector<double>::const_iterator covMatrixIt;
		std::vector<double> covMatrixList = getCovMatrixCopy();
		counter = 0;
		os << indent << "<covMatrixList n=\"" << covMatrixList.size() << "\">";
		for(covMatrixIt=covMatrixList.begin(); covMatrixIt!=covMatrixList.end(); covMatrixIt++) {
			os << indent << "<covMatrix i=\"" << counter++ << "\">" << *covMatrixIt << "</covMatrix>";
		}
		os << indent << "</covMatrixList>";
		os << indent << "<updateCount>" << getUpdateCount() << "</updateCount>";
		os << indent << "<pose3D>";
		getPose3D().to_xml(os, indent);
		os << indent << "</pose3D>";
		os << indent << "<timeStamp>";
		getTimeStamp().to_xml(os, indent);
		os << indent << "</timeStamp>";
	}
	
	// restore from xml stream
	void CommBasePoseCore::from_xml(std::istream &is) {
		size_t counter = 0;
		
		static const Smart::KnuthMorrisPratt kmp_covInvalid("<covInvalid>");
		static const Smart::KnuthMorrisPratt kmp_covMatrixList("<covMatrixList n=\"");
		static const Smart::KnuthMorrisPratt kmp_covMatrix("\">");
		static const Smart::KnuthMorrisPratt kmp_updateCount("<updateCount>");
		static const Smart::KnuthMorrisPratt kmp_pose3D("<pose3D>");
		static const Smart::KnuthMorrisPratt kmp_timeStamp("<timeStamp>");
		
		if(kmp_covInvalid.search(is)) {
			bool covInvalidItem;
			is >> covInvalidItem;
			setCovInvalid(covInvalidItem);
		}
		if(kmp_covMatrixList.search(is)) {
			size_t numberElements;
			is >> numberElements;
			double covMatrixItem;
			std::vector<double> covMatrixList;
			kmp_covMatrix.search(is);
			for(counter=0; counter<numberElements; counter++) {
				if(kmp_covMatrix.search(is)) {
					is >> covMatrixItem;
					covMatrixList.push_back(covMatrixItem);
				}
			}
			setCovMatrix(covMatrixList);
		}
		if(kmp_updateCount.search(is)) {
			unsigned int updateCountItem;
			is >> updateCountItem;
			setUpdateCount(updateCountItem);
		}
		if(kmp_pose3D.search(is)) {
			CommBasicObjects::CommPose3d pose3DItem;
			pose3DItem.from_xml(is);
			setPose3D(pose3DItem);
		}
		if(kmp_timeStamp.search(is)) {
			CommBasicObjects::CommTimeStamp timeStampItem;
			timeStampItem.from_xml(is);
			setTimeStamp(timeStampItem);
		}
	}
	
	/*
	void CommBasePoseCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		CommBasicObjectsIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(CommBasicObjectsIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommBasePoseACE.hh)
		cdr << idl_CommBasePose;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommBasePose);
		cdr << data_hash;
		// std::cout << "CommBasePoseCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommBasePoseCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		CommBasicObjectsIDL::HashList hashes;
		ACE_CDR::Long hashes_size;
		cdr >> hashes_size;
		for(int i=0; i<hashes_size; ++i) 
		{
			ACE_CString hash;
			cdr >> hash;
			hashes.push_back(hash.c_str());
		}
		checkAllHashValues(hashes);
		
		// Here the actual de-serialization takes place using the InputCDR serialization operator>>
		// (see CommBasePoseACE.hh)
		cdr >> idl_CommBasePose;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommBasePose);
		assert(data_hash == own_hash);
		// std::cout << "CommBasePoseCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace CommBasicObjects */
