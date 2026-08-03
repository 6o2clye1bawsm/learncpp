#include <iostream>
#include <string_view>
#include <bitset>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main () {
  P("xor^");
  P("returns true if only one bit is true");
  std::bitset<4> x{0b0110};
  std::bitset<4> y{0b0010};
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "x^y = " << (x^y) << '\n';
  return 0;
}
