#pragma once

#include <iosfwd>
#include <string>

#include <procgen-core/export.hxx>

namespace procgen_core
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  PROCGEN_CORE_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
