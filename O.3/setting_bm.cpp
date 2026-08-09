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
  
  P("to set a bit, you use the or|= operator so");
  P("if its already on it'll stay on, and if only");
  P("the mask is on it'll turn on since OR means");
  P("either can be on to return positively.");
  BR();

  cout << "our flags are " << format("{:b}", flags) << '\n';
  cout << "flag 2 is " << ((flags & mask2) ? "on" : "off") << '\n';
  flags |= mask2;
  cout << "after setting, flag 2 is " << ((flags & mask2) ? "on" : "off") << '\n';
  BR();

  P("if you want to set multiple at once, you can");
  P("do it by using the or| operator between the");
  P("masks in the or|assignment operation,");

  cout << "our flags are " << format("{:b}", flags) << '\n';
  flags |= (mask4 | mask5 | mask6);
  cout << "after setting 4,5,and 6, our flags are " << format("{:b}", flags) << '\n';

  return 0;
} 
