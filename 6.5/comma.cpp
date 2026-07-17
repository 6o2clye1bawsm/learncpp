#include <iostream>
#include <string_view>
using namespace std;

constexpr void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("the comma operator lets you evaluate multiple");
  P("expressions wherever a single expression is");
  P("allowed. it goes from left to right and evals");
  P("the right expression.");
  int x{4};
  int y{5};
  cout << "if x = " << x << " and y = " << y << ",\n";
  P("the result of std::cout << (++x,++y); is:");
  cout << (++x,++y) << '\n';
  BR();
  P("the comma operator also has the lowest precedence");
  P("i think of it like a separator. so something like");
  P("z = x, y separates (z = x) and (y), so all it does");
  P("is set z to x and evaluate y then do nothing w/");
  P("it. however if you do z = (x, y) then it'll");
  P("separate the x and y instead, evaluating x then");
  P("setting z = y because that's the one on the right.");
  int z{};
  cout << "x = " << x << ", y = " << y << ", so if we do (z = x, y), z = " << (z = x, y) << '\n';
  BR();
  P("overall you should just use the comma in for loops");
  P("or as a separator, like function arguments");
  return 0;
}
 
