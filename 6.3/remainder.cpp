#include <iostream>
#include <string_view>

void p(std::string_view str) {
  std::cout << str << '\n';
}

void br() {
  std::cout << '\n';
}

int main()
{
  p("The remainder operator functions like");
  p("how you would expect,");
  std::cout << "4 % 2 = " << 4 % 2 << ", and 8 % 3 =" << 8 % 3 << ".\n";
  p("There isn't much else to it.");
  br();
  p("Negative operands will cause the remainder to");
  p("take the sign of the first operand,");
  std::cout << "-8 % 3 = " << -8 % 3 << ", 8 % -3 = " << 8 % -3 << "\n";
  p("And with double negatives it's just negative,");
  std::cout << "-8 % -3 = " << -8 % -3 << "\n";
  return 0;
}
