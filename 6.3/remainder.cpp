#include <iostream>
#include <string_view>

void p(std::string_view str) {
  std::cout << str << '\n';
}

int main()
{
  std::cout << "The remainder operator functions like\n";
  p("how you would expect,");
  std::cout << "4 % 2 = " << 4 % 2 << ", and 8 % 3 =" << 8 % 3 << ".\n";
  p("There isn't much else to it.");

  return 0;
}
