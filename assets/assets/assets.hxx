#pragma once

#include <iosfwd>
#include <string>

#include <assets/export.hxx>

namespace assets
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  ASSETS_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
