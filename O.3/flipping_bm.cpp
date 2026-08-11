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
  uint8_t flags{0b0000'1001};

  P("to flip a bit on and off, use the xor^=");
  P("assignment operator. if both bits are on,");
  P("it returns off. if one is on (the mask),");
  P("it returns on.");
  BR();

  cout << "our flags are: " << format("{:b}", flags) << '\n';
  cout << "bit 3 is: " << ((flags & mask3)?"on":"off") << '\n';
  flags ^= mask3;
  cout << "after ^= mask3, bit 3 is: " << ((flags&mask3)?"on":"off") << '\n';
  BR();

  P("you can do multiple flips at once with");
  P("by applying the or| operator between the");
  P("masks before doing the xor (the or| puts");
  P("them together)");
  BR();
 
  cout << "our flags are: " << format("{:b}", flags) << '\n';
  flags ^= (mask4|mask6);
  cout << "after two flips, our flags are: " << format("{:b}", flags) << '\n';
  BR();


  
  return 0;
} 
