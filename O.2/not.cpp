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

int main() {
  P("not~:");
  P("it just flips everything");
  std::bitset<4> x{0b0110};
  cout << "x = " << x << '\n';
  cout << "~x = " << (~x) << '\n';
  return 0;
}
