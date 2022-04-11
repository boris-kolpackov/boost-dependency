#pragma once

#include <iosfwd>
#include <string>

#include <geometry/export.hxx>

namespace geometry
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  GEOMETRY_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
