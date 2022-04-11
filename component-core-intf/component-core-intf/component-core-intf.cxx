#include <component-core-intf/component-core-intf.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace component_core_intf
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
