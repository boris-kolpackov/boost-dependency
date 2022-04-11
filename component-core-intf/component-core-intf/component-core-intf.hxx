#pragma once

#include <iosfwd>
#include <string>

#include <component-core-intf/export.hxx>

namespace component_core_intf
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  COMPONENT_CORE_INTF_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
