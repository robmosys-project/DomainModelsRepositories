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
#ifndef COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_CORE_H_
#define COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_CORE_H_

#include "CommRobotinoObjects/CommNavigationPathsData.hh"
#include "CommRobotinoObjects/CommPathNode.hh"

#include <iostream>
#include <string>
#include <list>

namespace CommRobotinoObjects {
	
class CommNavigationPathsCore {
protected:
	// data structure
	CommRobotinoObjectsIDL::CommNavigationPaths idl_CommNavigationPaths;
	
public:
	// give a publicly accessible type-name for the template parameter IDL
	typedef CommRobotinoObjectsIDL::CommNavigationPaths DATATYPE;
	
	#ifdef ENABLE_HASH
		static size_t generateDataHash(const DATATYPE &);
	#endif
	
	static const char* getCompiledHash();
	static void getAllHashValues(std::list<std::string> &hashes);
	static void checkAllHashValues(std::list<std::string> &hashes);
	
	// default constructors
	CommNavigationPathsCore();
	CommNavigationPathsCore(const DATATYPE &data);
	// default destructor
	virtual ~CommNavigationPathsCore();
	
	const DATATYPE& get() const { return idl_CommNavigationPaths; }
	operator const DATATYPE&() const { return idl_CommNavigationPaths; }
	DATATYPE& set() { return idl_CommNavigationPaths; }

	static inline std::string identifier(void) { return "CommRobotinoObjects::CommNavigationPaths"; }
	
	// helper method to easily implement output stream in derived classes
	void to_ostream(std::ostream &os = std::cout) const;
	
	// convert to xml stream
	void to_xml(std::ostream &os, const std::string &indent = "") const;
	
	// restore from xml stream
	void from_xml(std::istream &is);
	
	// User Interface
	
	// getter and setter for element Nodes
	/**
	 * Getter methods for element idl_CommNavigationPaths.nodes of type vector<CommRobotinoObjects::CommPathNode>
	 */
	inline std::vector<CommRobotinoObjects::CommPathNode> getNodesCopy() const { 
		return std::vector<CommRobotinoObjects::CommPathNode>(idl_CommNavigationPaths.nodes.begin(), idl_CommNavigationPaths.nodes.end());
	}
	inline CommRobotinoObjects::CommPathNode getNodesElemAtPos(const size_t &pos) const {
		return CommRobotinoObjects::CommPathNode(idl_CommNavigationPaths.nodes[pos]);
	}
	inline size_t getNodesSize() const { return idl_CommNavigationPaths.nodes.size(); }
	inline bool isNodesEmpty() const { return idl_CommNavigationPaths.nodes.empty(); }
	/**
	 * Setter methods for idl_CommNavigationPaths.nodes of type vector<CommRobotinoObjects::CommPathNode>
	 */
	inline CommNavigationPathsCore& setNodes(const std::vector<CommRobotinoObjects::CommPathNode> &nodes) { 
		idl_CommNavigationPaths.nodes.assign(nodes.begin(), nodes.end());
		return *this;
	}
	inline bool setNodesElemAtPos(const size_t &pos, const CommRobotinoObjects::CommPathNode &elem) {
		if(pos < idl_CommNavigationPaths.nodes.size()) {
			idl_CommNavigationPaths.nodes[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertNodesVectorAtPos(const size_t &pos, const std::vector<CommRobotinoObjects::CommPathNode> &data) {
		if(pos < idl_CommNavigationPaths.nodes.size()) {
			idl_CommNavigationPaths.nodes.insert(idl_CommNavigationPaths.nodes.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizeNodes(const size_t &size) { idl_CommNavigationPaths.nodes.resize(size); }
	inline bool eraseNodesElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommNavigationPaths.nodes.size() ) {
			idl_CommNavigationPaths.nodes.erase(idl_CommNavigationPaths.nodes.begin()+pos, idl_CommNavigationPaths.nodes.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearNodes() { idl_CommNavigationPaths.nodes.clear(); }
	
	// getter and setter for element PathWidth
	/**
	 * Getter methods for idl_CommNavigationPaths.pathWidth of type vector<double>
	 */
	inline std::vector<double>& getPathWidthRef() { return idl_CommNavigationPaths.pathWidth; }
	inline std::vector<double> getPathWidthCopy() const {
		return std::vector<double>(idl_CommNavigationPaths.pathWidth.begin(), idl_CommNavigationPaths.pathWidth.end());
	}
	inline double getPathWidthElemAtPos(const size_t &pos) const { return idl_CommNavigationPaths.pathWidth[pos]; }
	inline size_t getPathWidthSize() const { return idl_CommNavigationPaths.pathWidth.size(); }
	inline bool isPathWidthEmpty() const { return idl_CommNavigationPaths.pathWidth.empty(); }
	/**
	 * Setter methods for idl_CommNavigationPaths.pathWidth of type vector<double>
	 */
	inline CommNavigationPathsCore& setPathWidth(const std::vector<double> &pathWidth) { idl_CommNavigationPaths.pathWidth = pathWidth; return *this; }
	inline bool setPathWidthElemAtPos(const size_t &pos, const double &elem) {
		if(pos < idl_CommNavigationPaths.pathWidth.size()) {
			idl_CommNavigationPaths.pathWidth[pos] = elem;
			return true;
		}
		return false;
	}
	inline bool insertPathWidthVectorAtPos(const size_t &pos, const std::vector<double> &data) {
		if(pos < idl_CommNavigationPaths.pathWidth.size()) {
			idl_CommNavigationPaths.pathWidth.insert(idl_CommNavigationPaths.pathWidth.begin()+pos, data.begin(), data.end());
			return true;
		}
		return false;
	}
	inline void resizePathWidth(const size_t &size) { idl_CommNavigationPaths.pathWidth.resize(size); }
	inline bool erasePathWidthElemsAtPos(const size_t &pos, const size_t &nbr_elems) {
		if( (pos+nbr_elems) <= idl_CommNavigationPaths.pathWidth.size() ) {
			idl_CommNavigationPaths.pathWidth.erase(idl_CommNavigationPaths.pathWidth.begin()+pos, idl_CommNavigationPaths.pathWidth.begin()+pos+nbr_elems);
			return true;
		}
		return false;
	}
	inline void clearPathWidth() { idl_CommNavigationPaths.pathWidth.clear(); }
	
	// getter and setter for element RobotID
	inline std::string getRobotID() const { return idl_CommNavigationPaths.robotID; }
	inline CommNavigationPathsCore& setRobotID(const std::string &robotID) { idl_CommNavigationPaths.robotID = robotID; return *this; }
};

} /* namespace CommRobotinoObjects */
#endif /* COMMROBOTINOOBJECTS_COMMNAVIGATIONPATHS_CORE_H_ */