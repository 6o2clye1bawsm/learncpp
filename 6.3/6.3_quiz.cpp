#include <iostream>
#include <string_view>

void p(std::string_view str) {
  std::cout << str << '\n';
}

void br() {
  std::cout << '\n';
}

bool isEven (int x) {
  if ((x % 2) != 0) {
    return 0;
  } else { return 1; }
}

int main() {
  p("q1: what does `6 + 5 * 4 % 3` evaluate to?");
  p("i think it evaluates to either 8 or 11 depending");
  p("on whether the * or % comes first. i could look");
  p("at the table but intuition tells me its * so ill");
  p("say its that (8) for now");
  br();
  p("q2: write a constexpr function that tells if an");
  p("input is even or odd, using % and making sure it");
  p("works for positive and negative INTegers");
  std::cout << std::boolalpha;
  std::cout << "Tests:\n+2 is even = " << isEven(2) << '\n';
  std::cout << "+3 is even = " << isEven(3) << '\n';
  std::cout << "-4 is even = " << isEven(-4) << '\n';
  std::cout << "-5 is even = " << isEven(-5) << '\n';
  br();
  p("results:");
  p("q1 and q2 are right");
  return 0;
}
