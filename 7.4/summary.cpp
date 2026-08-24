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
  P("summary:");
  P("non-const global vars:");
  P("zero-inited by default");
  P("can be manually zero-inited");
  P("can be manually value-inited");
  HR();
  P("const(expr) global vars:");
  P("must be inited");
  return 0;
}
