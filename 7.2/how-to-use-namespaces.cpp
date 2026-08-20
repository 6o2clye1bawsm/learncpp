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
  P("namespaces are:");
  P("not designed for information hierarchy");
  P("designed for preventing naming collisions");
  HR();
  P("small projects usually dont need namespaces,");
  P("but larger ones that have third party software might");
  HR();
  P("code that will be given to others should");
  P("be namespaced to prevent collisions with");
  P("any pre-existing code from a future user");
  HR();
  P("namespacing can help the IDE do autocomplete");
  P("by showing the namespace's functions after");
  P("you type the name of the namespace. this can");
  P("help users of your library see its functions");
  HR();
  P("if there are multiple teams working on one");
  P("codebase, namespaces could be used to  help");
  P("prevent collisions between different teams");
  P("template                 example");
  P("Project::Module          Foologger::Lang");
  P("Company::Project         Foosoft::Foologger");
  P("Company::Project::Module Foosoft::Foologger::Lang");
  HR();
  P("namespaces can be used to differentiate info");
  P("like reusable (Math::) code goes into a");
  P("namespace while project-specific code stays");
  P("global");
  P("directories can also do this, with project");
  P("code in one folder and reusable in another.");
  P("so its less necessary to do it w/ namespaces");
  return 0;
}
