#pragma once

#include <iosfwd>
#include <string>

#include <kbuild-temp/export.hxx>

namespace kbuild_temp
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  KBUILD_TEMP_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
