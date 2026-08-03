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
  P("left<< and right>> shift");
  std::bitset<4> x{0b0110};
  cout << "x = " << x << '\n';
  cout << "x<<1 = " << (x << 1) << '\n';
  P("the operator<< is used for both bitmanip and");
  P("i/o depending on the type of the operands, so");
  P("if youre trying to do a shift in the middle of");
  P("a std::cout, you have to add parenthesis:");
  P("std::cout << 'x shifted left 1 is: '  << (x << 1);");
  return 0;  
} 
