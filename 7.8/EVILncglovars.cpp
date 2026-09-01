#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

bool g_launchNukesBool;

void doSomethingUnrelated() {
  g_launchNukesBool = 1;
  P("doing something unrelated");
}

int main() {
  P("ncgvs are bad because any function could run");
  P("and change them, and other functions arent");
  P("notified of the change");
  cout << boolalpha;
  cout << "for example, the launch nukes bool is set to " << ( g_launchNukesBool = 0 ) << ",\nso the nuke check should go through properly\nhowever, after the nuke check...\n";
  doSomethingUnrelated();
  // programmer still expects g_mode to be 1
  // but doSomethingUnrelated changed it to 2
  if (!g_launchNukesBool) {
      cout << "no nuke launched\n";
  } else {
      cout << "launching nuclear missiles\n";
  }
  P("uh oh, after running doSomethingUnrelated(),");
  P("the nuke bool was turned on");
  HR();
  HR();
  P("you don't know the program's state when you");
  P("use ncglovars, so if your code relies on it");
  P("you have to go looking for whatever changed");
  P("the state (doSomethingUnrelated in our case)");
  HR();
  P("if an ncglovar is relied on for a condition,");
  P("and that condition isn't met, then it's hard");
  P("to know what caused it. it's less important");
  P("for just information, like a name, but even");
  P("that you could put in a scope.");
  HR();
  HR();
  P("the global scope also has problems with init");
  P("order");
  P("first, in static init, glovars with constexpr");
  P(" initers (including literals) are inited.");
  P(" this is called constant initialization.");
  P(" after that is zero-init, also static");
  P("nxt, in dynamic init, glovars w/ no-constepxr");
  P(" initers (like functs) are inited. they're");
  P(" usually inited in order of def, so if you");
  P(" try to make g_x = f(); and f{return g_y},");
  P(" then it will zero-init g_x");
  HR();
  HR();
  P("so why would you ever use a ncglovar?");
  P("you wouldn't, unless it reduces complexity");
  P("to put it in the global scope. this could be");
  P(" a log file");
  P(" a random number generator");
  P("for all global variables: there should only");
  P("ever be one, and it should be ubiquitous.");
  return 0;
}
