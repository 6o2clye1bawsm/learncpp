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
  uint8_t flags{0b0000'0101};
 
  P("testing bits with bit masks:");
  P("since we now have our bit masks, we can use");
  P("the and& operator to see if both bits are on,");
  P("and if both are on that'll return a value");
  P("greater than 1 which is true and on.");
  BR();
  
  cout << boolalpha;
  cout << "our flags are: " << format("{:b}", flags) << '\n';
  cout << "is the first (0th) bool on: " << static_cast<bool>(flags & mask0) << '\n';
  cout << "is the second (1st) bool on: " << static_cast<bool>(flags & mask1) << '\n';
  BR();

  P("if the & matches with something then it'll");
  P("give make the return value not-0 and any");
  P("return value other than 0 is true when");
  P("converting to bool");
  BR();

  P("you can also check multiple at once by doing");
  P("more comparisons, separating them with");
  P("parenthesis then linking them together with");
  P("LOGICAL AND&& not bitwise and& operators");
  cout << "our flags are: " << format("{:b}", flags) << '\n';
  cout << "is the 0th and 2nd flag on: " << ((flags & mask0) && (flags & mask2)) << '\n';
  return 0;
}
