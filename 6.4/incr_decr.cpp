#include <iostream>

void p(std::string_view str) {
  std::cout << str << '\n';
}

void br() {
  std::cout << '\n';
}

int main() {
  p("c++ has increment and decrement operators,");
  p("there are pre and post versions which look");
  p("the same but are either before (++x) or after");
  p("(x++) the operand");
  int x{5};
  int y{++x};
  std::cout << "If x = 5 and y = ++x, y = " << y << '\n';
  br();
  p("the postfix version basically just uses the original");
  p("value of x in the expression, then changes x after");
  std::cout << "since x is now equal to " << x << ",\n";
  y = x++;
  std::cout << "if we set y = x++, y = " << y << " and x = " << x << '\n';
  br();
  p("it's best to use the prefix version because it is");
  p("easier to anticipate what it will do and it is also");
  p("more performant.");

  return 0;
}
