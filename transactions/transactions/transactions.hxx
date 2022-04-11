#pragma once

#include <iosfwd>
#include <string>

#include <transactions/export.hxx>

namespace transactions
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  TRANSACTIONS_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
