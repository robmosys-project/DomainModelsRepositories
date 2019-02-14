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
#include "DomainPTU/CommPTUMoveRequestCore.hh"

// serialization/deserialization operators
//#include "DomainPTU/CommPTUMoveRequestACE.hh"

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

namespace DomainPTU 
{
	const char* CommPTUMoveRequestCore::getCompiledHash()
	{
		return DomainPTUIDL::REPO_HASH;
	}
	
	void CommPTUMoveRequestCore::getAllHashValues(std::list<std::string> &hashes)
	{
		// get own hash value
		hashes.push_back(getCompiledHash());
		// get hash value(s) for CommBasicObjects::CommPosition3d(idl_CommPTUMoveRequest.point)
		CommBasicObjects::CommPosition3d::getAllHashValues(hashes);
	}
	
	void CommPTUMoveRequestCore::checkAllHashValues(std::list<std::string> &hashes)
	{
		// check own hash value
		if (strcmp(getCompiledHash(), hashes.front().c_str()) != 0)
		{
			std::cerr << "###################################################" << std::endl;
			std::cerr << "WARNING: HASHES OF COMMUNICATION OBJECTS MISSMATCH!" << std::endl;
			std::cerr << "CommPTUMoveRequestCore hash" << std::endl;
			std::cerr << "Expected: " << getCompiledHash() << std::endl;
			std::cerr << "Received: " << hashes.front() << std::endl;
			std::cerr << "###################################################" << std::endl;
		}
		assert(strcmp(getCompiledHash(), hashes.front().c_str()) == 0);
		hashes.pop_front();
		
		// check hash value(s) for CommBasicObjects::CommPosition3d(idl_CommPTUMoveRequest.point)
		CommBasicObjects::CommPosition3d::checkAllHashValues(hashes);
	}
	
	#ifdef ENABLE_HASH
	size_t CommPTUMoveRequestCore::generateDataHash(const DATATYPE &data)
	{
		size_t seed = 0;
		
		boost::hash_combine(seed, data.pan);
		boost::hash_combine(seed, data.tilt);
		seed += CommBasicObjects::CommPosition3d::generateDataHash(data.point);
		boost::hash_combine(seed, data.flag);
		
		return seed;
	}
	#endif
	
	// default constructor
	CommPTUMoveRequestCore::CommPTUMoveRequestCore()
	:	idl_CommPTUMoveRequest()
	{  
		setPan(0.0);
		setTilt(0.0);
		setPoint(CommBasicObjects::CommPosition3d());
		setFlag(DomainPTU::PTUMoveFlag());
	}
	
	CommPTUMoveRequestCore::CommPTUMoveRequestCore(const DATATYPE &data)
	:	idl_CommPTUMoveRequest(data)
	{  }

	CommPTUMoveRequestCore::~CommPTUMoveRequestCore()
	{  }
	
	void CommPTUMoveRequestCore::to_ostream(std::ostream &os) const
	{
	  os << "CommPTUMoveRequest(";
	  os << getPan() << " ";
	  os << getTilt() << " ";
	  getPoint().to_ostream(os);
	  getFlag().to_ostream(os);
	  os << ") ";
	}
	
	// convert to xml stream
	void CommPTUMoveRequestCore::to_xml(std::ostream &os, const std::string &indent) const {
		os << indent << "<pan>" << getPan() << "</pan>";
		os << indent << "<tilt>" << getTilt() << "</tilt>";
		os << indent << "<point>";
		getPoint().to_xml(os, indent);
		os << indent << "</point>";
		os << indent << "<flag>";
		getFlag().to_xml(os, indent);
		os << indent << "</flag>";
	}
	
	// restore from xml stream
	void CommPTUMoveRequestCore::from_xml(std::istream &is) {
		static const Smart::KnuthMorrisPratt kmp_pan("<pan>");
		static const Smart::KnuthMorrisPratt kmp_tilt("<tilt>");
		static const Smart::KnuthMorrisPratt kmp_point("<point>");
		static const Smart::KnuthMorrisPratt kmp_flag("<flag>");
		
		if(kmp_pan.search(is)) {
			double panItem;
			is >> panItem;
			setPan(panItem);
		}
		if(kmp_tilt.search(is)) {
			double tiltItem;
			is >> tiltItem;
			setTilt(tiltItem);
		}
		if(kmp_point.search(is)) {
			CommBasicObjects::CommPosition3d pointItem;
			pointItem.from_xml(is);
			setPoint(pointItem);
		}
		if(kmp_flag.search(is)) {
			DomainPTU::PTUMoveFlag flagItem;
			flagItem.from_xml(is);
			setFlag(flagItem);
		}
	}
	
	/*
	void CommPTUMoveRequestCore::get(ACE_Message_Block *&msg) const
	{
		// start with a default internal buffer size(will automatically grow if needed)
		ACE_OutputCDR cdr(ACE_DEFAULT_CDR_BUFSIZE);
		
		DomainPTUIDL::HashList hashes;
		getAllHashValues(hashes);
		cdr << static_cast<ACE_CDR::Long>(hashes.size());
		for(DomainPTUIDL::HashList::const_iterator it=hashes.begin(); it!=hashes.end(); it++)
		{
			cdr << ACE_CString(it->c_str());
		}
		
		// Here the actual serialization takes place using the OutputCDR serialization operator<<
		// (see CommPTUMoveRequestACE.hh)
		cdr << idl_CommPTUMoveRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::ULong data_hash = generateDataHash(idl_CommPTUMoveRequest);
		cdr << data_hash;
		// std::cout << "CommPTUMoveRequestCore: current data hash: " << data_hash << std::endl;
	#endif
		
		// return a shallow copy of the serialized message 
		// (no data is actually copied, only the internal reference counter is incremented)
		// in order to prevent memory leaks the caller of this get(msg) method must
		// manually free the memory by calling the release() method of the message block msg
		msg = cdr.begin()->duplicate();
	}
	
	void CommPTUMoveRequestCore::set(const ACE_Message_Block *msg)
	{
		ACE_InputCDR cdr(msg);
	
		DomainPTUIDL::HashList hashes;
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
		// (see CommPTUMoveRequestACE.hh)
		cdr >> idl_CommPTUMoveRequest;
		
	#ifdef ENABLE_HASH
		ACE_CDR::Long data_hash;
		cdr >> data_hash;
		ACE_CDR::Long own_hash = generateDataHash(idl_CommPTUMoveRequest);
		assert(data_hash == own_hash);
		// std::cout << "CommPTUMoveRequestCore: own data hash: " << own_hash << "; received data hash: " << data_hash << std::endl;
	#endif
	}
	*/
} /* namespace DomainPTU */