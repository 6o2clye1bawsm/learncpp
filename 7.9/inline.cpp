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
  P("when you want to perform a task in a function,");
  P("you have the choice between adding to to the");
  P("function you're already in (inline) or making");
  P("another function which holds that task.");
  HR();
  P("the compiler sometimes makes functions inline");
  P("itself, taking the function's body and adding");
  P("it to the function being expanded");
  HR();
  P("this can be more efficient because the program");
  P("doesnt have to store information on where it's");
  P("left off in the original function and stuff");
  P("like that");
  HR();
  P("it can also be less efficient because it makes");
  P("the function bigger and executable larger(?)");
  HR();
  P("the compiler makes the choice over whether to");
  P("make a function inline at compile time or to");
  P("leave it as a function.");
  P("this shows how both are valuable, and also how");
  P("you shouldn't do it yourself");
  HR();
  P("!!!What NOT to use it for");
  P("the 'inline' keyword was originally for telling");
  P("the compiler what to make inline, back when");
  P("it wasnt as good at knowing. it shouldn't be");
  P("used for telling the compiler what to make");
  P("inline anymore because:");
  P("  they could harm performance (premature");
  P(" optimization)");
  P("  the compiler could just ignore it, its just");
  P(" a  suggestion");
  P("  a function shouldn't be set as inline all the");
  P(" time; some calls benefit it and some dont");
  HR();
  P("!!!What to PROPERLY USE it for");
  P("use inline to say that multiple definitions are");
  P("allowed for a function");
  P("inline functions have requirements:");
  P("  there is 1 definition in EVERY file it's used");
  P(" so a declaration isn't enough");
  P("  if the file is structured with a declaration,");
  P(" code1, the definition, then code2, the code1");
  P(" between probably wont be able to inline xpand,");
  P(" but code2 after will be able to");
  P("  every definition of an inline (with external");
  P(" linkage) has to be the same, but it can be");
  P(" repeated over multiple files");
  P("!!!The compiler needs to see the full def in the");
  P("source file, and xtern inlines mst be identical");
  HR();
  P("you can use this to like have a return{pi} func");
  P("in a file rather than using a pi cglovar.");
  HR();
  P("people usually put inlines in headers so they're");
  P("automatically copied and identical in all files");
  HR();
  P("avoid inline unless you have a really good reason");
  P("like a header library");
  HR();
  P("still only probably use it for trivial stuff");
  P("because the function needs to be compiled many");
  P("times (for every file it's used in); if you");
  P("change one function in a header, every file is");
  P("recompiled. if you just defined the func in one");
  P("file and did a fwdecl in the header, only that");
  P("file would be recomped");
  
        
        

  return 0;
}
