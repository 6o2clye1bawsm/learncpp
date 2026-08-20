#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

namespace Hl { // html-like
  void HR() {
    cout << '\n';
  }
  // didnt add p because i dont want to type Hl every time
}

int main() {
  P("because every identifier can collide with");
  P("every other identifier, a linear increase");
  P("in identifiers results with an exponential");
  P("increase in collisions");
  Hl::HR();
  P("namespaces help prevent naming collisions,");
  P("if you have internally different functions");
  P("with the same name, instead of having to");
  P("rename them, you can just use namespaces.");
  P("this is done through the namespace keyword");
  P(", which makes a program-defined namespace.");
  Hl::HR();
  P("you should try to start namespaces with");
  P("capital letters, but its fine if not.");
  Hl::HR();
  return 0;
}
