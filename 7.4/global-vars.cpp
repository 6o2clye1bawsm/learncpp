#include <iostream>
#include <string_view>
using namespace std;

int g_x{5};

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("global variables are declared outside of");
  P("a function.");
  HR();
  P("\"global variables are declared at the top");
  P("of a file, below the includes, in the");
  P("global namespace.\"");
  cout << "global var g_x = " << g_x << '\n';
  HR();
  P("since they are declared in the global");
  P("namespace, they have global scope and are");
  P("visible from point of declaration to the");
  P("end of a file (thats why every file needs");
  P("their own headers");
  P("it can be used anywhere in the file past");
  P("that point.");
  HR();
  P("they can also be defined in a user-defined");
  P("namespace, but namespaces are usually");
  P("defined in the global scope so they are");
  P("globally accessible through Alias::g_x");
  P("!!!Prefer defining in a namespace");
  HR();
  P("global vars are created when the program");
  P("starts and before main(), then destroyed");
  P("when the program ends. this is called");
  P("static duration (because it doesn't change");
  P("for the whole duration of runtime?)");
  HR();
  P("when naming global variables, prefix with");
  P("a g_ or g. this prevents collisions, name");
  P("shadowing(?), and indicate that any changes");
  P("to these vars are global.");
  P("!!!Prefix with g_");
  HR();
  P("vars with static duration are zero-initd");
  P("by default, so 'int g_x' = 'int g_x{}'");
  HR();
  P("use of non-const global vars should be");
  P("avoided and they are EVIL.");
  return 0;
}
