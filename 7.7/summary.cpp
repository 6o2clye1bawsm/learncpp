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
  P("extern forward decls:");
  P("int g_x;");
  P("extern const int g_x // const version");
  HR();
  P("external linkage glovars def:");
  P("int g_x; // optionally inited, auto zero-init / no extern needed, non-const");
  P("extern const int g_x {1} // required init / extern needed, const");
  return 0;
}
