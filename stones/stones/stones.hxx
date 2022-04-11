#pragma once

#include <iosfwd>
#include <string>

#include <stones/export.hxx>

namespace stones
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  STONES_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
