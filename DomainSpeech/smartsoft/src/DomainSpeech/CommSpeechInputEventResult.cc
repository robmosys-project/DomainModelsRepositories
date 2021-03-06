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
// --------------------------------------------------------------------------
//
//  Copyright (C) 2009 Andreas Steck, Matthias Lutz
//
//        schlegel@hs-ulm.de
//
//        Prof. Dr. Christian Schlegel
//        University of Applied Sciences
//        Prittwitzstr. 10
//        D-89075 Ulm
//        Germany
//
//  This file is part of the "SmartSoft Communication Library".
//  It provides standardized patterns for communication between
//  different components.
//
//  This library is free software; you can redistribute it and/or
//  modify it under the terms of the GNU Lesser General Public
//  License as published by the Free Software Foundation; either
//  version 2.1 of the License, or (at your option) any later version.
//
//  This library is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public
//  License along with this library; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
// --------------------------------------------------------------------------

#include "DomainSpeech/CommSpeechInputEventResult.hh"

using namespace DomainSpeech;

CommSpeechInputEventResult::CommSpeechInputEventResult()
:	CommSpeechInputEventResultCore()
{  }


/**
 * Constructor to set all values.
 * NOTE that you have to keep this constructor consistent with the model!
 * Use  at your own choice.
 *
 * The preferred way to set values for initialization is:
 *      CommRepository::MyCommObject obj;
 *      obj.setX(1).setY(2).setZ(3)...;
CommSpeechInputEventResult::CommSpeechInputEventResult(const std::string &text, const double &confidence, const std::string &semantic)
:	CommSpeechInputEventResultCore() // base constructor sets default values as defined in the model
{
	setText(text);
	setConfidence(confidence);
	setSemantic(semantic);
}
 */

CommSpeechInputEventResult::CommSpeechInputEventResult(const CommSpeechInputEventResultCore &commSpeechInputEventResult)
:	CommSpeechInputEventResultCore(commSpeechInputEventResult)
{  }

CommSpeechInputEventResult::CommSpeechInputEventResult(const DATATYPE &commSpeechInputEventResult)
:	CommSpeechInputEventResultCore(commSpeechInputEventResult)
{  }

CommSpeechInputEventResult::~CommSpeechInputEventResult()
{  }


void CommSpeechInputEventResult::set_text(std::string text)
{
	idl_CommSpeechInputEventResult.text = text.c_str();
}

std::string CommSpeechInputEventResult::get_text() const
{
  return idl_CommSpeechInputEventResult.text.c_str();
}

void CommSpeechInputEventResult::set_semantic(std::string semantic)
{
	idl_CommSpeechInputEventResult.semantic = semantic.c_str();
}

std::string CommSpeechInputEventResult::get_semantic() const
{
  return idl_CommSpeechInputEventResult.semantic.c_str();
}

void CommSpeechInputEventResult::set_confidence(double confidence)
{
	idl_CommSpeechInputEventResult.confidence = confidence;
}

double CommSpeechInputEventResult::get_confidence() const
{
  return idl_CommSpeechInputEventResult.confidence;
}
