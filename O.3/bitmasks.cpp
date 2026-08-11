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
  P("combine multiple with | i think");
  
  BR();
  P("notice that the ones that have side effects");
  P("use the assignment operators");
  BR();

  P("setting bits with bit masks:");
  P("to set a bit, you use the or|= assignment");
  P("operator with a mask");
  P("flags |= mask#");
  P("combine multiple with |");
  BR();

  P("resetting bits with bit masks:");
  P("this is similar to setting bits, but relies");
  P("on the fact that every bit has to be on for");
  P("and& to return true. set the mask off with");
  P("the not~ operator and assign with the and&=");
  P("operator");
  P("flags &= ~mask#");
  P("combine multiple with |");
  BR();

  P("flipping bits with bit masks:");
  P("you have to xor them");
  P("flags ^= mask#");
  P("combine multiple with |");
  BR();

  P("when are bitmasks most useful?");
  P("they are supposed to save memory. thats why");
  P("we dont want to use bitsets, at least a part");
  P("of why. but just the masks use 8 bytes!!");
  P("it does save memory. if you have 8 individual");
  P("8-bit byte bools per person, 100 people would");
  P("need 800 bytes. but if you used those 8 bits");
  P("in a byte as one bool each, it'd be 1 byte");
  P("per person and 100 bytes total. then the");
  P("masks would only account for 8 bytes. 800 is");
  P("much larger than 108.");
  P("the other reason is for function inputs that");
  P("use many bools. if a function takes a lot of");
  P("bools you could always just type them out w/");
  P("your hands and have all the trues and the");
  P("falses laid out. that would be hard to read.");
  P("so instead, you can just use a bit mask with");
  P("a label like option10 for bit 10. then you");
  P("just pass option10 if you need option 10, or");
  P("(option10 | option4) for 10 and 4.");
  return 0;
}
