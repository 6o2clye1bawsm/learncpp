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
  //in graphics this is how RGBA is stored
  constexpr uint32_t redFlags{0xFF000000};
	constexpr uint32_t bluFlags{0x00FF0000};
	constexpr uint32_t greFlags{0x0000FF00};
	constexpr uint32_t alfFlags{0x000000FF};
  
  cout << "enter a 32-bit hex #: ";
  uint32_t color{};
  cin >> hex >> color;
  
  //int8 for 1/4 of the 32 bits
  const uint8_t red{static_cast<uint8_t>((color & redFlags) >> 24)};
  const uint8_t blu{static_cast<uint8_t>((color & bluFlags) >> 16)};
  const uint8_t gre{static_cast<uint8_t>((color & greFlags) >> 8 )};
  const uint8_t alf{static_cast<uint8_t>((color & alfFlags) >> 0 )};

  P("your color has:");
  cout << hex; //could i have used something like this to print binary instead of using format?
  //cast to int so its not char
  cout << static_cast<int>(red) << " red\n";
  cout << static_cast<int>(blu) << " blue\n";
  cout << static_cast<int>(gre) << " green\n";
  cout << static_cast<int>(alf) << " opacity\n";

  return 0;
}
