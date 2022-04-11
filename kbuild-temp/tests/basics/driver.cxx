#include <sstream>
#include <stdexcept>

#include <kbuild-temp/version.hxx>
#include <kbuild-temp/kbuild-temp.hxx>

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace std;
  using namespace kbuild_temp;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
