#include <kbuild-perm/kbuild-perm.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace kbuild_perm
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
