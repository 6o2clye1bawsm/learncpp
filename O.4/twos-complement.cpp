#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("to make a # negative, you switch the leftmost");
  P("bit to one, but you also invert all the bits");
  P("of the normal positive number. so in reality");
  P("just invert all of the bits. after that, add");
  P("1");
  BR();
  P("add 1 so 0 doesnt have two representations,");
  P("1111 when negative (everything inverted), and");
  P("0000 when positive (no invert). if you add 1");
  P("to 1111, it turns back into 0000");
  BR();
  P("two's complement is just the weird name they");
  P("chose for representing signed (negative) #s");
  P("in binary. if the leftmost bit is 1, the # is");
  P("negative. if the leftmost bit is 0, its pos");
  BR();
  P("deci -b> bina with twos complement");
  P("1. starting # -5");
  P("2. get 5 in binary (0101)");
  P("3. invert (1010)");
  P("4. add 1 (1011)");
  BR();
  P("bina -d> deci with twos complement");
  P("1. starting # 1001");
  P("2. check the leftmost bit. if 0, do regular");
  P("  conversion. if 1, continue.");
  P("3. invert the bits (0110)");
  P("4. add 1 (0111)");
  P("5. do regular conversion (1+2+4=7)");
  P("6. make negative since starting # was also");
  P("  negative (-7)");
  return 0;
}
