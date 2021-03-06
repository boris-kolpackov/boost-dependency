#include <procgen-core/procgen-core.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace procgen_core
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
