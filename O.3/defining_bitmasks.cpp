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
  BR();

  P("when you are defining your bitmasks you can");
  P("make them more useful by labelling each mask");
  P("so that their purpose is visible in the code");

	[[maybe_unused]] constexpr uint8_t isHappy   {1   }; // 0
	[[maybe_unused]] constexpr uint8_t isHungry  {1<<1}; // 1
	[[maybe_unused]] constexpr uint8_t isMad     {1<<2}; // 2
	[[maybe_unused]] constexpr uint8_t isSad     {1<<3}; // 3
	[[maybe_unused]] constexpr uint8_t isLaughing{1<<4}; // 4
	[[maybe_unused]] constexpr uint8_t isAsleep  {1<<5}; // 5
	[[maybe_unused]] constexpr uint8_t isDead    {1<<6}; // 6
	[[maybe_unused]] constexpr uint8_t isCrying  {1<<7}; // 7
  uint8_t me{};
  me |= (isHappy | isLaughing);
  me &= ~(isHappy | isLaughing);
  me |= (isSad | isCrying);

  cout << boolalpha;
  cout << "Me is happy: " << static_cast<bool>(me & isHappy) << '\n';
  cout << "Me is sad: " << static_cast<bool>(me & isSad) << '\n';
  //you can do the same with bitmasks, instead of casting to bool do .any() to know if any val is there
  return 0;
}
