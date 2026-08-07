#include <iostream>
#include <string_view>
#include <cstdint>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("defining bit masks:");
  P("to define a bit mask you just make a literal");
  P("with only one bit on, which will be the bit");
  P("youll modify with the operator.");
  BR();
	[[maybe_unused]] constexpr std::uint8_t mask0{ 0b0000'0001 }; // represents bit 0
	[[maybe_unused]] constexpr std::uint8_t mask1{ 0b0000'0010 }; // represents bit 1
	[[maybe_unused]] constexpr std::uint8_t mask2{ 0b0000'0100 }; // represents bit 2
	[[maybe_unused]] constexpr std::uint8_t mask3{ 0b0000'1000 }; // represents bit 3
	[[maybe_unused]] constexpr std::uint8_t mask4{ 0b0001'0000 }; // represents bit 4
	[[maybe_unused]] constexpr std::uint8_t mask5{ 0b0010'0000 }; // represents bit 5
	[[maybe_unused]] constexpr std::uint8_t mask6{ 0b0100'0000 }; // represents bit 6
	[[maybe_unused]] constexpr std::uint8_t mask7{ 0b1000'0000 }; // represents bit 7
  P("if you're using a version of cpp from 2011 or");
  P("earlier, there arent any binary0b literals so");
  P("you can use:");
  P("1. hexadecimal0x literals (0x01, 0x02, 0x04...)");
  P("2. left shifting a 1 (1<<1, 1<<2, 1<<3...)");
  return 0;
}
