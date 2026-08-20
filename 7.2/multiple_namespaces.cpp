#include <iostream>
#include <string_view>
using namespace std;

namespace Hl { // html-like
  void HR() {
    cout << '\n';
  }
  namespace Text {
    void P(string_view str) {
      cout << str << '\n';
    }  
  } 
}

void P(string_view str) { Hl::Text::P(str); }

int main() {
  namespace H = Hl;
  P("you can define functions/variables/identifiers");
  P("of a namespace in multiple files. if you have a");
  P("namespace, anything defined in the same namesace");
  P("regardless of the file, will be added");
  P("note: dont add functionality to the std namesace");
  H::HR();
  P("one useful way to do this is with forward");
  P("declarations in header files.");
  P("a header can have:");
  P("namespace Math { int add( int x, int y ); }");
  P("while the source has:");
  P("namespace Math { int add( int x, int y ){ return x + y; } }");
  P("and main has:");
  P("#include \"Math.h\" cout << add(4, 5);");
  P("if the header hadn't put the forward declaration");
  P("in the Math namespace, then the linker wouldve");
  P("been looking for add() in the global scope, where");
  P("it doesnt exist");
  H::HR();
  H::HR();
  P("you can also have multiple namespaces nesting");
  P("each other, two ways:");
  P("namespace 1 { namespace 2 {int x{3} } }");
  P("namespace 1::2 {int x{3} }");
  P("these are equivalent, in both x = 1::2::x, so");
  P("choose whatever one you want.");
  return 0;
}
