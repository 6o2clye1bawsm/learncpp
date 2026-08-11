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
  P("bitwise operators are good for logic on the");
  P("whole set of bits but if you want to do");
  P("individual positions, you need to use bit");
  P("masks, which blocks operators from touching");
  P("other bits");
  BR();

  P("defining bit masks:");
  P("to define a bit mask you just make an uint");
  P("with only one bit on, which will be the bit");
  P("youll modify with the operator.");
	P("[[maybe_unused]] constexpr std::uint8_t mask0{ 0b0000'0001 };");
  BR();

  P("testing bits with bit masks:");
  P("since we now have our bit masks, we can use");
  P("the and& operator to see if there's a match");
  P("flags & mask#");
  
  BR();
  P("notice that the ones that have side effects");
  P("use the assignment operators");
  BR();

  P("setting bits with bit masks:");
  P("to set a bit, you use the or|= assignment");
  P("operator with a mask");
  P("flags |= mask#");
  BR();

  P("resetting bits with bit masks:");
  P("this is similar to setting bits, but relies");
  P("on the fact that every bit has to be on for");
  P("and& to return true. set the mask off with");
  P("the not~ operator and assign with the and&=");
  P("operator");
  P("flags &= ~mask#");
  BR();
  return 0;
}
