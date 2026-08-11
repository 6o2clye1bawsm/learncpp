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

  P("& to query (ask if they're on) bits");
  P("  if (flags & (mask5 | mask2))...");
  BR();
  P("|= to set (turn on) bits");
  P("  flags |= (mask5 | mask2);");
  BR();
  P("&= ~ to reset (turn off) bits");
  P("  flags &= ~(mask2 | mask5);");
  BR();
  P("^= to flip bits");
  P("  flags ^= (mask2 | mask5);");
  return 0;
} 
