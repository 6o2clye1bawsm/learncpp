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
  P("the OR|| operator tests whether either of the");
  P("operands are true, including if theyre both");
  P("true.");
  cout << "enter a 0 or 1: ";
  bool x{};
  cin >> x;
  cout << "enter a 0 or 1: ";
  bool y{};
  cin >> y;
  if (x || y) {P("at least one was 1");} else {P("neither are 1");}
  P("you can use multiple in a row,");
  cout << "enter another 0 or 1: ";
  bool z{};
  cin >> z;
  if (x || y || z) {P("at least one out of x, y, and z are 1");} else {P("none were 1 out of x, y, and z");}
  P("this functiond similar to the bitwise OR but its");
  P("different, make sure to use the double ||");
  return 0;
}
