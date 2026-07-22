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
  P("the not operator is used to invert the value");
  P("of the bool operand. it has a very high level");
  P("of precedence so it can be easy to use wrong");
  
  int x{};
  cout << "Enter value of x: ";
  cin >> x;

  int y{};
  cout << "Enter the value of y: ";
  cin >> y;
  
  if (!x > y) {P("x is not greater than y");} else {P("x is greater than y");}
  P("the code does not work because not! is applied");
  P("before the greaterthan>. just close stuff in parenthesis");
  return 0;
}
