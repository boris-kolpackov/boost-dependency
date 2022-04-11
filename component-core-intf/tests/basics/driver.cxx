#include <sstream>
#include <stdexcept>

#include <component-core-intf/version.hxx>
#include <component-core-intf/component-core-intf.hxx>

#undef NDEBUG
#include <cassert>

int main ()
{
  using namespace std;
  using namespace component_core_intf;

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
