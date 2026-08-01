#include <iostream>
#include <string_view>
#include <cstdint>
#include <print>
#include <bitset>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("bit manipulation operators == bitwise operators");
  P("they do not modify their operands but return a");
  P("new value");
  P("left shift<<, x << n shifts the bits of x left by n bits, new bits are 0");
  P("right shift>>, x >> n shifts the bits of x right by n bits, new bits are 0");
  P("not~, ~x flips each bit of x");
  P("and&, x & y sets when both bits compared are on, resets if one or none");
  P("or|, x | y sets when either are on; when both arent off; when at least one is on");
  P("xor^, x ^ y, when they are different, when one is on and the other is off");
  BR();
  P("use bitwise operators with unsigned integrals");
  P("or std::bitset only, signed will do implemntn");
  P("defined behavior");
  BR();
  
  P("left<< and right>> shift");
  std::bitset<4> x{0b0110};
  cout << "x = " << x << '\n';
  cout << "x<<1 = " << (x << 1) << '\n';
  P("the operator<< is used for both bitmanip and");
  P("i/o depending on the type of the operands, so");
  P("if youre trying to do a shift in the middle of");
  P("a std::cout, you have to add parenthesis:");
  P("std::cout << x << (x << 1);");
  BR();
  P("not~:");
  P("it just flips everything");
  cout << "x = " << x << '\n';
  cout << "~x = " << (~x) << '\n';
  BR();
  P("or|");
  P("returns true if any bit is true");
  bitset<4> y{0b0010};
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "x|y = " << (x|y) << '\n';
  BR();
  P("and&");
  P("returns true if all bits are true");
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "x&y = " << (x&y) << '\n';
  BR();
  P("xor^");
  P("returns true if only one bit is true");
  cout << "x = " << x << '\n';
  cout << "y = " << y << '\n';
  cout << "x^y = " << (x^y) << '\n';
  BR();
  P("there are also assignment operator versions");
  P("of all of these except not~");
  BR();
  P("also if the type that youre operating on is");
  P("smaller than an int, then using any of the");
  P("operators will automatically upgrade it to");
  P("the size of an int");
  return 0;
}
