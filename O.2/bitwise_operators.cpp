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
  P("there are also assignment operator versions");
  P("of all of these except not~");
  BR();
  P("also if the type that youre operating on is");
  P("smaller than an int, then using any of the");
  P("operators will automatically upgrade it to");
  P("the size of an int");
  return 0;
}
