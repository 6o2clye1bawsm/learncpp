#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("what are local variables?");
  HR();
  P("local variables have block scope:");
  P("they are in scope from their point of");
  P("definition in a block to the end of");
  P("that block.");
  int x{4};
  cout << "variable x has value " << x << "and\nwill go out of scope at the end of the main() function block\n";
  P("the same behavior is true for function");
  P("parameters, even though they are defined");
  P("outside the function body");
  HR();
  P("all variable names in a scope must be unique:");
  P("if a given scope has two variables");
  P("defined with the same name, it wont");
  P("compile.");
  HR();
  P("local variables have automatic storage duration:");
  P("the duration of when the variable is");
  P("instantiated and destroyed is automatic");
  P(", the point of definition & end of the");
  P("block.");
  HR();
  P("local vars can be defined in nested blocks:");
  P("this functions as expected, and is");
  P("identical to function blocks in their");
  P("instantiation and destruction.");
  P("variables defined in an outer block");
  P("can be seen within inner blocks, as");
  P("expected");
  HR();
  P("local vars have no linkage:");
  P("linkage determines whether a");
  P("declaration with the same identifier");
  P("refers to the same object.");
  P("since local vars have no linkage, an");
  P("int x defined in an outer block can");
  P("be overriden by an int x defined");
  P("within an inner block.");
  P("this is different from scope, as");
  P("scope refers to if an identifier");
  P("can be used, and linkage refers");
  P("to if multiple declarations of the");
  P("same identifier refer to the same");
  P("function");
  HR();
  P("variables should be defined in the most limited scope:");
  P("if it's not necessary in the current");
  P("scope, wait until later to define it.");
  HR();
  return 0;
}
