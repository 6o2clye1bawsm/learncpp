#include <iostream>
#include <cmath>
#include <string_view>
void p(std::string_view str) {
  std::cout << str << '\n';
}

int main ()
{
  p("The ^ operator is for bitwise operations (later)");
  p(", so we have to use <cmath> to do exponents.");
  p("Learncpp doesn't give an example of it, but");
  p("since the <cmath> version uses floating point");
  p("numbers, the value usually isn't super precise.");
  std::cout << "3 to the power of 4 = " << std::pow(3.0, 4.0) << '\n';
  return 0;
}
