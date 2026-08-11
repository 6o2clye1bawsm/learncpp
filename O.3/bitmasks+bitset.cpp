#include <iostream>
#include <string_view>
#include <cstdint>
#include <format>
#include <bitset>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  [[maybe_unused]] constexpr bitset<8> mask0{0b0000'0001};
	[[maybe_unused]] constexpr bitset<8> mask1{0b0000'0010};
	[[maybe_unused]] constexpr bitset<8> mask2{0b0000'0100};
	[[maybe_unused]] constexpr bitset<8> mask3{0b0000'1000};
	[[maybe_unused]] constexpr bitset<8> mask4{0b0001'0000};
	[[maybe_unused]] constexpr bitset<8> mask5{0b0010'0000};
	[[maybe_unused]] constexpr bitset<8> mask6{0b0100'0000};
	[[maybe_unused]] constexpr bitset<8> mask7{0b1000'0000};
  bitset<8> flags{0b0100'0110};
  
  P("you can combine the useful member functions");
  P("of the bitset type with bitmasks, because");
  P("bitsets dont normally let you edit multiple");
  P("bits at once. we can just use the | operator");
  P("within parenthesis to add up multiple masks.");
  BR();

  cout << "our flags are: " << flags << '\n';
  flags ^= (mask1 | mask2);
  cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");
  BR();
	flags |= (mask1 | mask2);
	cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");
  BR();
	flags &= ~(mask1 | mask2);
	cout << "bit 1 is " << (flags.test(1) ? "on\n" : "off\n");
	cout << "bit 2 is " << (flags.test(2) ? "on\n" : "off\n");

  return 0;
}
