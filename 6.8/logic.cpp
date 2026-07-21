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
  P("in this lesson i will try to do better at separating the cpp files");
  BR();
  P("cpp has the AND&&, OR&&, and NOT! logical operators");
  P("not: inverts value               (t-f) (f-t)");
  P("and: if both are there it's true (tt-t) (tf-f) (ft-f) (ff-f)");
  P("or: if either or both are there  (tf-t) (ft-t) (tt-t) (ff-f)");
}
