// this is for emacs file handling -*- mode: c++; indent-tabs-mode: nil -*-

// -- BEGIN LICENSE BLOCK ----------------------------------------------
// Copyright 2019 FZI Forschungszentrum Informatik
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// -- END LICENSE BLOCK ------------------------------------------------

//----------------------------------------------------------------------
/*!\file
 *
 * \author  Tristan Schnell schnell@fzi.de
 * \date    2019-04-09
 *
 */
//----------------------------------------------------------------------

#include "ur_rtde_driver/rtde/control_package_setup_outputs.h"

namespace ur_driver
{
namespace rtde_interface
{
bool ControlPackageSetupOutputs::parseWith(comm::BinParser& bp)
{
  bp.parse(output_recipe_id_);
  bp.parseRemainder(variable_types_);

  return true;
}
std::string ControlPackageSetupOutputs::toString() const
{
  std::stringstream ss;
  ss << "output recipe id: " << output_recipe_id_ << std::endl;
  ss << "variable types: " << variable_types_;

  return ss.str();
}
}  // namespace rtde_interface
}  // namespace ur_driver
