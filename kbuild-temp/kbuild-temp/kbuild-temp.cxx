#include <kbuild-temp/kbuild-temp.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace kbuild_temp
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
