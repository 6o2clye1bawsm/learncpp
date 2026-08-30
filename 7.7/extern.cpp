#include <iostream>
#include <string_view>
using namespace std;

const int baba{8484};

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("external linkage: all source files can see it");
  HR();
  P("functions have external linkage by default,");
  P("you need to use a forward declaration before");
  P("you're able to access them though.");
  HR();
  HR();
  P("global vars with external linkage are sometimes");
  P("called external variables. use 'extern' keyword");
  P("non-const glo vars are auto-extern");
  P("  if you use extern on them and init, compiler wont know if it's supposed to be a fwd delc, or an initd n-c glovar");
  P("const glo vars can be set to extern");
  P("constexpr glo vars shouldn't be set to extern");
  P(" because files are compiled before linked, so it");
  P(" wont be applied to other files during compile");
  P(" time and youll get an error");
  HR();
  P("you can do forward variable declarations like");
  P("how we do with functions, you just need to put");
  P("the 'extern' keyword before it, and leave don't");
  P("init it. the linker will do all that stuff");
  HR();
  P("this shows how extern is used for making");
  P("identifiers extern, and getting other extern");
  P("identifiers.");
  P("if you try to make an uninit non-const glo var,");
  P("it'll be 'extern int g_x;' and cpp will think");
  P("you're trying to make a forward delc (getting");
  P("an extern rather than making one)");
  HR();
  return 0;
}
