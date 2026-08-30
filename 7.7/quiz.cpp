#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("q1:what's the difference between scope, duration, linkage?");
  P("scope: where you can use it");
  P("duration: rules of when it exists // created and destroyed");
  P("linkage: can you access in or out the");
  P("  source file (scope but bigger)");
  P("*correct besides that phrase for duration*");
  HR();
  P("q2:what scope, duration, linkage do glovars have?");
  P("scope: extern can be used literally");
  P("  wherever you want // global scope; point of declaration to end of file");
  P("duration: they have static duration");
  P("  so the whole runtime");
  P("linkage: external if you say so and");
  P("  internal if you say so. nc extern");
  P("  by default, everything else intrn");
  P("*1/2 points, scope is answering the wrong");
  P("question and linkage doesnt mention the");
  P("static and extern keywords*");
  return 0;
}
