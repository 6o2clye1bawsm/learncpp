#include <iostream>
#include <string_view>
using namespace std;

static int g_x{4};

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

int main() {
  P("a identifer with internal linkage can be seen");
  P("and used within one translation unit (file)");
  P("so two files can have the same identifier with");
  P("internal linkage, and they will be treated as");
  P("independent.");
  HR();
  P("global vars with internal linkage are sometimes");
  P("called internal vars because they are independe");
  P("within their source files while being global");
  HR();
  P("you make a non-const global internal using the");
  P("the 'static' keyword. now it is unique to this");
  P("source file.");
  P("by default, non-const globals are external and");
  P("const globals are internal");
  P("check code for extra notes"); // note: 'static' is a storage class specifier, which sets linkage and storage duration. the most common ones are static, extern, and mutable");
  // Objects with external linkage can only be defined in a single translation unit without violating the ODR -- other translation units must access those objects via a forward declaration. If const objects had external linkage by default, they would only be usable in constant expressions in the single translation unit containing the definition, and they could not be effectively propagated via header files, as #including the header into more than one source file would result in an ODR violation.
  // Objects with internal linkage can have a definition in each translation unit where they are needed without violating the ODR. This allows const objects to be placed in a header file and #included into as many translation units as desired without violating the ODR. And since each translation unit has a definition rather than a declaration, this ensures that those constants can be used in constant expressions within the translation unit.
  HR();
  P("function identifiers also have linkage, which");
  P("is external by default (why they can use forward declaration)");
  P("but you can also make them static to stop");
  P("forward declarations");
  HR();
  P("internal objects/functions can be defined in");
  P("multiple files multiple times, there will be");
  P("no collision");
  HR();
  P("people dont really use 'static' as much,");
  P("unnamed namespaces(?) have replaced them");
  HR();
  P("why would we want to use static/unnamed namespaces/internal linkage?");
  P("1. you want to make sure an identifier, like a global");
  P("  var or a funciton, cant be messed with or called");
  P("2. you know you dont want to use this identifier");
  P("  anywhere else and you wanna prevent collisions");
  HR();
  P("!!!Best practice:");
  P("1. use internal linkage when you have an explicit reason");
  P("2. give all identifiers you dont want accessible internal");
  P("  linkage (not with static, with unnamed namespaces)");
  return 0;
}
