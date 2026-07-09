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
  br();
  p("It's also best to see if something is odd using");
  p("the remainder with 2 not being 0 rather than");
  p("being 1 because if you're trying to see if a");
  p("negative number is odd or even, it the remainder");
  p("of an odd number will be -1, but will show as");
  p("even because it's not POSivite 1.");
  std::cout << "-5 % 2 = " << -5 % 2 << ", so check if its !=0 instead of ==1.\n";
  return 0;
}
