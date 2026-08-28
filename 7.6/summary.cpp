#include <iostream>
#include <string_view>
using namespace std;

static int g_x{4};

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("internal global vars defs:");
  P("static int g_x{1};      // optionally inited / non-const, need 'static'");
  P("const(expr) int g_x{1}; // required inited   / const, no need 'static'");
  HR();
  P("static int foo() {}     // function, need 'static'");
  return 0;
}
