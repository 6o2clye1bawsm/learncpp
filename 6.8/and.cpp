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
  P("the AND&& operator only returns true if both");
  P("operands are true.");
  cout << "enter number 1: ";
  int x{};
  cin >> x;
  cout << "enter number 2: ";
  int y{};
  cin >> y;
  if ((x > 10) && (y > 10)) {P("both values are greater than 10");} else {P("one of the values are less than 10, or both are");}
  P("the AND&& operator also has short circuit");
  P("evaluation, so if the first operand is");
  P("false, then the later operands wont eval.");
  P("if a later operand does a ++ or something");
  P("then that wont run.");
  //P("evaluation:");
  //bool z{};
  //while (z == false) {
  //  cout << "x = " << x << ", and y = " << y << '\n';
  //  
  //  if ((x = 0) && (y == 2)) {
  //    P("set x to a value other than 0: ");
  //    cin >> x; 
  //  } else if (y != 2) {
  //    z = 1;
  //    cout << "y should've been incremented, but it's still " << y << '\n';
  //  } else {
  //    P("set y to a value other than 2: ");
  //    cin >> y;
  //  }
  //}
  return 0;
}
