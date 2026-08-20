#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

namespace Hl { // html-like
  void HR() {
    cout << '\n';
  }
  int x{4};
  // didnt add p because i dont want to type Hl every time
}

int main() {
  P("to access a namespace, use the scope resolution");
  P("operator, which resolves the scope to use.");
  P("the left side tells the scope and the right side");
  P("tells the identifier to look for.");
  Hl::HR();
  P("for the namespace Hl, you can use function HR()");
  P("by running Hl::HR();. you can also access a");
  P("variable like x by using Hl::x;");
  cout << "Hl::x = " << Hl::x;
  Hl::HR();
  P("if you leave the left operand blank, like ::HR()");
  P("or ::x, it'll look for that identifier in the");
  P("global scope");
  P("this isn't that useful if you're writing code");
  P("that's already in the global scope, because it's");
  P("the same as just writing HR() or x");
  P("if you're not in the global scope, like if youre");
  P("writing code in a namespace's block, youll be in");
  P("that namespace's scope so running HR() actually");
  P("runs Hl::HR(). if you want to access the regular");
  P("HR(), you can run ::HR()");
  return 0;
}
