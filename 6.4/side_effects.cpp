#include <iostream>
#include <string_view>

void p(std::string_view str) {
  std::cout << str << '\n';
}

void br() {
  std::cout << '\n';
}

int main() {
  p("a side effect is anything a function/expression");
  p("does which isn't a return value. for example if");
  p("we initialize x with 0,");
  int x{0}; std::cout << "x = " << x << '\n';
  std::cout << "after evaluating the expression x = 5,\n";
  x = 5;
  std::cout << "x will equal " << x << ".\n";
  p("operator<< with std::cout changes the state of the");
  p("console, and ++x changes the value of x. these are");
  p("all side effects.");
  br();
  p("side effects can be bad for order of evaluation bc");
  p("of things like function argument evualuation. if u");
  p("do something like add(x,++x), it could be equal to");
  p("x + (x + 1) if left to right, or (x + 1) + (x + 1)");
  p("if right to left. the cpp standards dont define it");
  p("so your compiler can make the choice.");
  br();
  p("similar issues happen with side effect sequencing,");
  p("because in something like x + ++x, the ++x happens");
  p("at a different time depending on the compiler.");

  return 0;
}
