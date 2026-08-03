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

std::bitset<4> rotl1(bitset<4> bits) {
  if (bits.test(3)) return (bits <<= 1, bits.set(0)); else return (bits <<= 1);
}

std::bitset<4> rotl2(bitset<4> bits) {
  return (bits << 1 | bits >> 3); 
}

int main() {
  P("q1: eval logic");
  P("a: 0110 >> 2");
  P("0010 *correct*");
  P("b: 0011 | 0101");
  P("0111 *correct*");
  P("c: 0011 & 0101");
  P("0001 *correct*");
  P("d: (0011 | 0101) & 1001");
  P("0111 & 1001");
  P("0001 *correct*");
  BR();

  P("q2: make a rotate function as opposed to the shift function");
  std::bitset<4> bits1{ 0b0001 };
	std::cout << rotl1(bits1) << '\n';

	std::bitset<4> bits2{ 0b1001 };
	std::cout << rotl1(bits2) << '\n';
  P("*correct*");
  BR();

  P("q3: make the same function except without test and set");
	P("hint used: \"Consider a “shift” in your perspective\"");
  std::cout << rotl2(bits1) << '\n';
	std::cout << rotl2(bits2) << '\n';
  P("*correct*");
  return 0;
}
