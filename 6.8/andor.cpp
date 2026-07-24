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
  P("&& and || seem like they should be simple but");
  P("they can be complex. && has higher precedence");
  P("and run first without parenthesis. left-right");
  P("association doesn't apply because they are in");
  P("different precedence levels.");
  P("use parenthesis when mixing && and ||");
  BR();
  P("de morgan's laws: when you distribute the NOT!, the operator also flips");
  P("!(x && y) is equivalent to !x || !y");
  P("!(x || y) is equivalent to !x && !y");
  BR();
  P("XOR is the same as != because if two values");
  P("are not equal then they have to be different");
  P("which is what XOR is all about. bools only tho");
  P("(also if you want to convert stuff to bool you can do static_cast<bool>() or doubleinvert!!)");
  return 0;
}
