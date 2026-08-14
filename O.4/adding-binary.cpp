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
  P("adding in binary is basically the same as");
  P("adding in decimal. 1+1 is equal to 10 though");
  P("(1+1 = 2, 2 -b> 10)");
  BR();
  P("6 -b> 0110, 7 -b> 0111");
  BR();
  P("     ");
  P(" 0110");
  P("+0111");
  P("-----");
  P("     ");
  BR();
  P("     ");
  P(" 0110");
  P("+0111");
  P("-----");
  P("    1");
  BR();
  P("  1  ");
  P(" 0110");
  P("+0111");
  P("-----");
  P("   01");
  BR();
  P(" 11  ");
  P(" 0110");
  P("+0111");
  P("-----");
  P("  101");
  BR();
  P(" 11  ");
  P(" 0110");
  P("+0111");
  P("-----");
  P(" 1101");
  BR();
  return 0;
}
