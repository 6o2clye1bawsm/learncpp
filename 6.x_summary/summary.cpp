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
  P("parenthesis are good for reducing confusion");
  P("there are +,-,*,\\,% and their assignment operator versions.");
  P("there are also the pre and post incr/decr operators which add/minus 1 before/after the next operation");
  P("side effects are anything other than a return value, assignment operators and incr/decr have this");
  P("comma operator is used for separating things there isnt much purpose other than that");
  P("the condition?: operator is like an if statement if x {y} else {z}. put parenthesis around operands if they have conditions too");
  P("relational operators are ><=, floating point numbers need the epsilon incase the #s are close");
  P("logic operators make compound conditions");
  return 0;
}
