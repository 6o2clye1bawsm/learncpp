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
  P("how do we protect ncglovars?");
  P("use g_ prefix OR put them in a namespace");
  P("instead of actually accessing them, have");
  P(" a function in the source file of the");
  P(" glovar that only returns the glovar's");
  P(" value and doesn't edit it. this could");
  P(" be in constants.cpp");
  P("instead of using glovars directly in");
  P(" function bodies that need them, pass");
  P(" the glovar as a parameter so it can be");
  P(" changed much more easily.");
  HR();
  P("this goes for all glovars, not just ncglovars");
  P("people still hate all glovars.");
  return 0;
}
