#include <iostream>
#include <string_view>
#include <cstdint>
#include <format>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  [[maybe_unused]] constexpr uint8_t mask0{0b0000'0001};
	[[maybe_unused]] constexpr uint8_t mask1{0b0000'0010};
	[[maybe_unused]] constexpr uint8_t mask2{0b0000'0100};
	[[maybe_unused]] constexpr uint8_t mask3{0b0000'1000};
	[[maybe_unused]] constexpr uint8_t mask4{0b0001'0000};
	[[maybe_unused]] constexpr uint8_t mask5{0b0010'0000};
	[[maybe_unused]] constexpr uint8_t mask6{0b0100'0000};
	[[maybe_unused]] constexpr uint8_t mask7{0b1000'0000};
  uint8_t flags{0b1110'1100};

  P("to set a bit, you use ~ on the mask you");
  P("wanna reset so that it's off. then you use");
  P("the &= operator because one of them is already");
  P("off the &= operator will always return");
  P("negatively, which means itll be set to 0 on");
  P("that flag specifically from the &= on that only.");
  P("if you know what i mean.");
  BR();

  cout << "our flags are: " << format("{:b}", flags) << '\n';
  cout << "bit 5 is " << ((flags & mask5)?"on":"off") << '\n';
  flags &= ~mask5;
  cout << "after the reset, bit 5 is " << ((flags & mask5)?"on":"off") << '\n';
  BR();

  P("to set multiple flags off at once, you can");
  P("simply use the or| operator inside the not~");
  P("operation to apply the not~ to multiple bits");
  BR();

  cout << "our flags are: " << format("{:b}", flags) << '\n';
  flags &= ~(mask2 | mask3);
  cout << "which flags were reset?: " << format("{:b}", flags) << '\n';
  BR();

  P("if you get an error about sign conversion, the");
  P("mask is probably small and getting promoted to");
  P("a signed int, which means the left is unsigned");
  P("and the right is signed. convert the right to");
  P("an unsigned int (probably uint8_t) to fix it.");
  return 0;
} 
