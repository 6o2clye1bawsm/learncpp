#include <iostream>
#include <string_view>
using namespace std;

int g_x{5};

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("this lesson is about name hiding/shadowing:");
  P("when you have a variable, like int x(x1), in");
  P("the outer block, then in the inner block, u");
  P("define that again(x2). since local vars have");
  P("no linkage, it makes two unique int x vars");
  P("(x1,x2), so for the duration of x2, you can't");
  P("access x1, all evaluations apply to x2");
  HR();
  HR();
  P("this is likely to happen with global vars,");
  P("as if the global namespace is the outer block");
  HR();
  P("it's less of an issue with global vars b/c");
  P("you can use the scope operator:: to access");
  P("the global scope");
  HR();
  P("name hiding/shadowing should be avoided, and");
  P("it is one good reason to use g_ on global");
  P("variables.");
  P("gcc and clang also have -Wshadow warnings options");
  return 0;
}
