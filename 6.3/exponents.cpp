#include <iostream>
#include <string_view>

void p(std::string_view str) {
  std::cout << str << '\n';
}

void br() {
  std::cout << '\n';
}

constexpr size_t powint(size_t b, int e) {
  if (b == 0) {
    if (e == 0) {
      return 0;
    } else {
      return 1;
    }
  }

  size_t result{1};
  size_t i{1};
  while (!(i > e)) {
    result = result * b;
    i = i + 1;
  }

  return result;
}

int main() {
  p("learncpp says it's best to do your own exponent");
  p("function, the one i made is in this file, here is");
  p("it working:");
  
  std::cout << "2 to the power of 3 = " << powint(2,3) << '\n';

  p("this lesson also features the assert() function,");
  p("which allows to make sure things are proper even");
  p("if its not a syntax error.");
  br();
  p("learncpp also does a lot of extra stuff to check");
  p("for overflow but we havent learned it yet, it uses");
  p("things like cerr and numeric limits.");
}
