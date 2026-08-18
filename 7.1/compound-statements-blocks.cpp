#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("compound statements == block == block statement");
  P("they are groups of statements held within {},");
  P("which the compiler treats as one statement.");
  P("they are most commonly used in functions.");
  BR();
  {
    P("blocks can be nested within each other like");
    P("this:");
    P("{ //outer block");
    P("  { //inner block");
    P("    cout << \"Hi\\n\"");
    P("  }");
    P("}");
    P("with the outer and inner blocks reffered to");
    P("as they're labelled");
  }
  P("the nesting level refers to how many blocks");
  P("youre nested in, it should be kept down and is");
  P("undesirable in functions similar to how overly");
  P("long functions are undesired. 3 or less is ok");
  BR();

  P("you can use them to execute multiple things at");
  if (1) {
    P("once with if statements, even though they");
    P("normally only allow one statement");
  }
  BR();
  return 0;
}
