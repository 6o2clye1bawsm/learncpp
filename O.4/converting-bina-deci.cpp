#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("decimal: 5619 = (9*10^0) + (1*10^1) + (6*10^2) + (5*10^3)");
  P("binary: 0101 = (1*2^0) + (0*2^1) + (1*2^2) + (0*2^3)");
  P("decimal increases by a factor of 10 with each");
  P("place. binary is the same, but with a factor");
  P("of two. we can use this knowledge to convert");
  P("between binary and decimal.");
  return 0;
}
