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
// This file is generated once. Modify this file to your needs. 
// If you want the toolchain to re-generate this file, please 
// delete it before running the code generator.
//--------------------------------------------------------------------------
#ifndef COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_H_
#define COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_H_

#include "CommObjectRecognitionObjects/CommObjectRecognitionObjectPropertiesCore.hh"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>

#include <stdint.h>

namespace CommObjectRecognitionObjects {
		
class CommObjectRecognitionObjectProperties : public CommObjectRecognitionObjectPropertiesCore {
	public:
		// default constructors
		CommObjectRecognitionObjectProperties();
		
		/**
		 * Constructor to set all values.
		 * NOTE that you have to keep this constructor consistent with the model!
		 * Use  at your own choice.
		 *
		 * The preferred way to set values for initialization is:
		 *      CommRepository::MyCommObject obj;
		 *      obj.setX(1).setY(2).setZ(3)...;
		 */
		// CommObjectRecognitionObjectProperties(const unsigned int &object_id, const std::string &object_type, const CommBasicObjects::CommPose3d &pose, const CommBasicObjects::CommPosition3d &dimension, const std::vector<CommObjectRecognitionObjects::ObjectBelief> &beliefs, const CommObjectRecognitionObjects::TriMesh &mesh, const std::vector<CommObjectRecognitionObjects::Relation> &relations, const std::vector<CommBasicObjects::CommPose3d> &objectSurfacePoses, const bool &is_valid = false, const double &fill_level = -1.0);
		
		CommObjectRecognitionObjectProperties(const CommObjectRecognitionObjectPropertiesCore &commObjectRecognitionObjectProperties);
		CommObjectRecognitionObjectProperties(const DATATYPE &commObjectRecognitionObjectProperties);
		virtual ~CommObjectRecognitionObjectProperties();
		
		// use framework specific getter and setter methods from core (base) class
		using CommObjectRecognitionObjectPropertiesCore::get;
		using CommObjectRecognitionObjectPropertiesCore::set;
		
		//
		// feel free to add customized methods here
		//

		inline unsigned getBeliefsNbrElements() const
			{
				return idl_CommObjectRecognitionObjectProperties.beliefs.size();
			}
			inline CommObjectRecognitionObjectsIDL::CommObjectBelief getBeliefsElementFromPos(
					const unsigned &pos) const
			{
				return CommObjectRecognitionObjectsIDL::CommObjectBelief(
						idl_CommObjectRecognitionObjectProperties.beliefs[pos]);
			}
			inline bool setBeliefsElementOnPos(
					const CommObjectRecognitionObjectsIDL::CommObjectBelief &beliefs,
					const unsigned &pos)
			{
				if (pos < getBeliefsNbrElements())
				{
					idl_CommObjectRecognitionObjectProperties.beliefs[pos] = beliefs;
					return true;
				}
				return false;
			}

			inline CommBasicObjects::CommPosition3d getDimension() const
			{
				return CommBasicObjects::CommPosition3d(
						idl_CommObjectRecognitionObjectProperties.dimension);
			}
			inline void setDimension(const CommBasicObjects::CommPosition3d &dimension)
			{
				idl_CommObjectRecognitionObjectProperties.dimension = dimension;
			}

			inline double getFill_level() const
			{
				return idl_CommObjectRecognitionObjectProperties.fill_level;
			}
			inline void setFill_level(const double &fill_level)
			{
				idl_CommObjectRecognitionObjectProperties.fill_level = fill_level;
			}

			inline bool getIs_valid() const
			{
				return idl_CommObjectRecognitionObjectProperties.is_valid;
			}
			inline void setIs_valid(const bool &is_valid)
			{
				idl_CommObjectRecognitionObjectProperties.is_valid = is_valid;
			}

			inline CommObjectRecognitionObjectsIDL::CommTriMesh getMesh() const
			{
				return CommObjectRecognitionObjectsIDL::CommTriMesh(
						idl_CommObjectRecognitionObjectProperties.mesh);
			}
			inline void setMesh(const CommObjectRecognitionObjectsIDL::CommTriMesh &mesh)
			{
				idl_CommObjectRecognitionObjectProperties.mesh = mesh;
			}

			inline unsigned int getObject_id() const
			{
				return idl_CommObjectRecognitionObjectProperties.object_id;
			}
			inline void setObject_id(const unsigned int &object_id)
			{
				idl_CommObjectRecognitionObjectProperties.object_id = object_id;
			}

			inline std::string getObject_type() const
			{
				return idl_CommObjectRecognitionObjectProperties.object_type.c_str();
			}
			inline void setObject_type(const std::string &object_type)
			{
				idl_CommObjectRecognitionObjectProperties.object_type
						= object_type.c_str();
			}

			inline CommBasicObjects::CommPose3d getPose() const
			{
				return CommBasicObjects::CommPose3d(
						idl_CommObjectRecognitionObjectProperties.pose);
			}
			inline void setPose(const CommBasicObjects::CommPose3d &pose)
			{
				idl_CommObjectRecognitionObjectProperties.pose = pose;
			}

			inline unsigned getRelationsNbrElements() const
			{
				return idl_CommObjectRecognitionObjectProperties.relations.size();
			}
			inline CommObjectRecognitionObjectsIDL::CommObjectRelation getRelationsElementFromPos(
					const unsigned &pos) const
			{
				return CommObjectRecognitionObjectsIDL::CommObjectRelation(
						idl_CommObjectRecognitionObjectProperties.relations[pos]);
			}
			inline bool setRelationsElementOnPos(
					const CommObjectRecognitionObjectsIDL::CommObjectRelation &relations,
					const unsigned &pos)
			{
				if (pos < getRelationsNbrElements())
				{
					idl_CommObjectRecognitionObjectProperties.relations[pos]
							= relations;
					return true;
				}
				return false;
			}

			//
			// add your customized interface here
			//

			/**
			 * Check if this object is valid.
			 * Invalid object properties may be sent if the object id could not be resolved by the component.
			 */
			inline bool is_valid() const {
				return idl_CommObjectRecognitionObjectProperties.is_valid;
			}

			/**
			 * Get the object as a lisp representation.
			 * (ok((id ?id)(type ?type)(pose ?x ?y ?z ?azimuth ?elevation ?roll)(dimension ?x ?y ?z)))
			 */
			void get(std::string& str) const {
				std::stringstream stream;
				stream << std::setprecision(3) << std::fixed;

				stream << "(ok((id " << idl_CommObjectRecognitionObjectProperties.object_id << ")";
				stream << "(type " << idl_CommObjectRecognitionObjectProperties.object_type << ")";

		//		stream << "(color ";
		//		switch (idl_CommObjectRecognitionObjectProperties.object_color) {
		//		case CommObjectRecognitionObjectsIDL::LITERAL_RED:
		//			stream << "red";
		//			break;
		//		case CommObjectRecognitionObjectsIDL::LITERAL_GREEN:
		//			stream << "green";
		//			break;
		//		case CommObjectRecognitionObjectsIDL::LITERAL_BLUE:
		//			stream << "blue";
		//			break;
		//		default:
		//			stream << "no_color";
		//			break;
		//		}
		//		stream << ")";

				stream << "(pose " << idl_CommObjectRecognitionObjectProperties.pose.position.x;
				stream << " " << idl_CommObjectRecognitionObjectProperties.pose.position.y;
				stream << " " << idl_CommObjectRecognitionObjectProperties.pose.position.z;
				stream << " " << idl_CommObjectRecognitionObjectProperties.pose.orientation.azimuth;
				stream << " " << idl_CommObjectRecognitionObjectProperties.pose.orientation.elevation;
				stream << " " << idl_CommObjectRecognitionObjectProperties.pose.orientation.roll << ")";

				stream << "(dimension " << idl_CommObjectRecognitionObjectProperties.dimension.x;
				stream << " " << idl_CommObjectRecognitionObjectProperties.dimension.y;
				stream << " " << idl_CommObjectRecognitionObjectProperties.dimension.z << ")";

				stream << "))";

				str = stream.str();
			}

			/**
			 * Set the properties to valid/invalid
			 */
			inline void set_valid(bool valid) {
				idl_CommObjectRecognitionObjectProperties.is_valid = valid;
			}

			/**
			 * Set the unique id of the object.
			 */
			inline void set_id(uint32_t id) {
				idl_CommObjectRecognitionObjectProperties.object_id = id;
			}

			/**
			 * Get the unique id of the object.
			 */
			inline uint32_t get_id() const {
				return idl_CommObjectRecognitionObjectProperties.object_id;
			}

			/**
			 * Set the type of the object.
			 */
			inline void set_type(const std::string& type) {
				idl_CommObjectRecognitionObjectProperties.object_type = type.c_str();
			}

			/**
			 * Get the type of the object.
			 */
			inline void get_type(std::string& type) const {
				type = idl_CommObjectRecognitionObjectProperties.object_type.c_str();
			}

			/**
			 * Set the 6D pose of the object in the robot coordinate system
			 */
			inline void set_pose(const CommBasicObjects::CommPose3d& pose) {
				idl_CommObjectRecognitionObjectProperties.pose = pose;
			}

			/**
			 * Get the 6D pose of the object in the robot coordinate system
			 */
			inline CommBasicObjects::CommPose3d get_pose() const {
				return CommBasicObjects::CommPose3d(idl_CommObjectRecognitionObjectProperties.pose);
			}


			/**
			 * Get the triMesh of the obstacles in the environment (points in robot coordinate system)
			 */
			inline void get_triMesh(std::vector< std::vector<uint32_t> > &vertices, std::vector< std::vector<double> > &points) const{
					uint32_t vertices_size = idl_CommObjectRecognitionObjectProperties.mesh.vertices_p1.size();
					uint32_t points_size = idl_CommObjectRecognitionObjectProperties.mesh.points_x.size();

					vertices.resize(vertices_size);
					points.resize(points_size);

					for(unsigned int i=0;i<points_size;++i){
						points[i].resize(3);
						points[i][0] = idl_CommObjectRecognitionObjectProperties.mesh.points_x[i];
						points[i][1] = idl_CommObjectRecognitionObjectProperties.mesh.points_y[i];
						points[i][2] = idl_CommObjectRecognitionObjectProperties.mesh.points_z[i];
					}

					for(unsigned int i=0;i<vertices_size;++i){
						vertices[i].resize(3);
						vertices[i][0] = idl_CommObjectRecognitionObjectProperties.mesh.vertices_p1[i];
						vertices[i][1] = idl_CommObjectRecognitionObjectProperties.mesh.vertices_p2[i];
						vertices[i][2] = idl_CommObjectRecognitionObjectProperties.mesh.vertices_p3[i];
					}
			}

			/**
			 * Set the triMesh of the obstacles in the environment (points in robot coordinate system)
			 */
			inline void set_triMesh(const std::vector< std::vector<uint32_t> > &vertices, const std::vector< std::vector<double> > &points) {

					uint32_t vertices_size = vertices.size();
					uint32_t points_size = points.size();
					idl_CommObjectRecognitionObjectProperties.mesh.points_x.resize(points_size);
					idl_CommObjectRecognitionObjectProperties.mesh.points_y.resize(points_size);
					idl_CommObjectRecognitionObjectProperties.mesh.points_z.resize(points_size);
					idl_CommObjectRecognitionObjectProperties.mesh.vertices_p1.resize(vertices_size);
					idl_CommObjectRecognitionObjectProperties.mesh.vertices_p2.resize(vertices_size);
					idl_CommObjectRecognitionObjectProperties.mesh.vertices_p3.resize(vertices_size);


					for(unsigned int i=0;i<points_size;++i){
						idl_CommObjectRecognitionObjectProperties.mesh.points_x[i] = points[i][0];
						idl_CommObjectRecognitionObjectProperties.mesh.points_y[i] = points[i][1];
						idl_CommObjectRecognitionObjectProperties.mesh.points_z[i] = points[i][2];


					}

					for(unsigned int i=0;i<vertices_size;++i){
						idl_CommObjectRecognitionObjectProperties.mesh.vertices_p1[i] = vertices[i][0];
						idl_CommObjectRecognitionObjectProperties.mesh.vertices_p2[i] = vertices[i][1];
						idl_CommObjectRecognitionObjectProperties.mesh.vertices_p3[i] = vertices[i][2];
					}


			}

			inline void set_relation_size(int size) {
				idl_CommObjectRecognitionObjectProperties.relations.resize(size);
			}

			inline int get_relation_size() const {
				return 	idl_CommObjectRecognitionObjectProperties.relations.size();
			}

			inline void set_relation(int index, RelationType relTyp,uint32_t relObjID){
				idl_CommObjectRecognitionObjectProperties.relations[index].type = relTyp;
				idl_CommObjectRecognitionObjectProperties.relations[index].relatedObjectId = relObjID;
			}

			inline void get_relation(int index, RelationType &relTyp,uint32_t &relObjID){
				relTyp = idl_CommObjectRecognitionObjectProperties.relations[index].type;
				relObjID = idl_CommObjectRecognitionObjectProperties.relations[index].relatedObjectId;
			}



			/**
			 * Set the dimension(with, height, depth) of the object.
			 */
			inline void set_dimension(const double x, const double y, const double z, const double unit = 0.001) {
				idl_CommObjectRecognitionObjectProperties.dimension.x = x * unit * 1000;
				idl_CommObjectRecognitionObjectProperties.dimension.y = y * unit * 1000;
				idl_CommObjectRecognitionObjectProperties.dimension.z = z * unit * 1000;
			}

			/**
			 * Get the dimension(with, height, depth) of the object.
			 */
			inline void get_dimension(double& x, double& y, double& z, const double unit = 0.001) {
				x = idl_CommObjectRecognitionObjectProperties.dimension.x * 0.001 / unit;
				y = idl_CommObjectRecognitionObjectProperties.dimension.y * 0.001 / unit;
				z = idl_CommObjectRecognitionObjectProperties.dimension.z * 0.001 / unit;
			}

			void set_beliefs_size(int size) {
				idl_CommObjectRecognitionObjectProperties.beliefs.resize(size);
			}

			int get_beliefs_size() const {
				return 	idl_CommObjectRecognitionObjectProperties.beliefs.size();
			}

			inline void set_posePdf_valid(int index, bool valid) {
				idl_CommObjectRecognitionObjectProperties.beliefs[index].validPosePdf = valid;
			}

			inline bool is_posePdf_valid(int index) const {
				return idl_CommObjectRecognitionObjectProperties.beliefs[index].validPosePdf;
			}

			void set_belief(int index, std::string type, double probability) {
				idl_CommObjectRecognitionObjectProperties.beliefs[index].type = type.c_str();
				idl_CommObjectRecognitionObjectProperties.beliefs[index].probability = probability;
				//idl_CommObjectRecognitionObjectProperties.beliefs[index].validPosePdf = false;

			}

			void set_belief(int index, std::string type, double probability, double x, double y, double z, double yaw, double pitch, double roll, arma::mat mat, const double unit = 0.001) {
				idl_CommObjectRecognitionObjectProperties.beliefs[index].type = type.c_str();
				idl_CommObjectRecognitionObjectProperties.beliefs[index].probability = probability;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.x = x * unit * 1000;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.y = y * unit * 1000;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.z = z * unit * 1000;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.azimuth = yaw;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.elevation = pitch;
				idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.roll = roll;


				idl_CommObjectRecognitionObjectProperties.beliefs[index].cov.resize(6*6);
				if (mat.n_cols != 6 && mat.n_rows != 6)
				{
					return;
				}
				for (size_t i = 0; i < 6; ++i)
				{
					for (size_t j = 0; j < 6; j++)
					{
						idl_CommObjectRecognitionObjectProperties.beliefs[index].cov[i*6 + j] = mat(i, j);
					}
				}

				idl_CommObjectRecognitionObjectProperties.beliefs[index].validPosePdf = true;

			}

			void get_belief(int index, std::string &type, double &probability) const {
				type = idl_CommObjectRecognitionObjectProperties.beliefs[index].type.c_str();
				probability = idl_CommObjectRecognitionObjectProperties.beliefs[index].probability;
			}

			void get_belief(int index, std::string &type, double &probability, double &x, double &y, double &z, double &yaw, double &pitch, double &roll, arma::mat &mat, const double unit = 0.001) const {
				type = idl_CommObjectRecognitionObjectProperties.beliefs[index].type.c_str();
				probability = idl_CommObjectRecognitionObjectProperties.beliefs[index].probability;

				x = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.x * 0.001 / unit;
				y = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.y * 0.001 / unit;
				z = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.position.z * 0.001 / unit;

				yaw = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.azimuth;
				pitch = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.elevation;
				roll = idl_CommObjectRecognitionObjectProperties.beliefs[index].pose.orientation.roll;


				arma::mat m(6, 6);
				for (size_t i = 0; i < 6; ++i)
				{
					for (size_t j = 0; j < 6; j++)
					{
						m(i, j) = idl_CommObjectRecognitionObjectProperties.beliefs[index].cov[i*6 + j]; // _m is 1-dimension!
					}
				}
				mat = m;
			}

			/**
			 * Set the fill level of the object in range 0-100, -1 is not recognized!
			 */
			inline void set_fillLevel(double level) {
				idl_CommObjectRecognitionObjectProperties.fill_level = level;
			}

			/**
			 * Get the fill level of the object in range 0-100, -1 is not recognized!
			 */
			inline double get_fillLevel() const {
				return idl_CommObjectRecognitionObjectProperties.fill_level;
			}


			/**
			 * Print the object to an output stream.
			 * @param os Output stream to which should be printed
			 */
			void print(std::ostream &os = std::cout) const;
};

inline std::ostream &operator<<(std::ostream &os, const CommObjectRecognitionObjectProperties &co)
{
	co.to_ostream(os);
	return os;
}
	
} /* namespace CommObjectRecognitionObjects */
#endif /* COMMOBJECTRECOGNITIONOBJECTS_COMMOBJECTRECOGNITIONOBJECTPROPERTIES_H_ */
