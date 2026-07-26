#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

bool isEven(int x) {
  return !(x % 2 != 0);
}

int main() {
  P("in this lesson i will try to do better at separating the cpp files");
  BR();
  P("cpp has the AND&&, OR&&, and NOT! logical operators");
  P("not: inverts value               (t-f) (f-t)");
  P("and: if both are there it's true (tt-t) (tf-f) (ft-f) (ff-f)");
  P("or: if either or both are there  (tf-t) (ft-t) (tt-t) (ff-f)");
  BR();
  P("you can also use:");
  P("'and' instead of &&");
  P("'or' instead of ||");
  P("'not' instead of !");
  BR();
  P("Quiz:");
  P("question 1: calculate the final value");
  P("a) (true && true) || false");
  P("true || false");
  P("true *correct*");
  BR();
  P("b) (false && true) || true");
  P("false || true");
  P("true *correct*");
  P("note: short circuiting only occurs when the first operand of or|| is false");
  BR();
  P("c) (false && true) || false || true");
  P("true || false || true");
  P("true *incorrect*");
  P("correct:");
  P("false || false || true");
  P("false || true");
  P("true");
  BR();
  P("d) (5 > 6 || 4 > 3) && (7 > 8)");
  P("(false || true) && (false)");
  P("true && false");
  P("false *correct*");
  BR();
  P("e) !(7 > 6 || 3 > 4)");
  P("!(true || 3 > 4)");
  P("!(true)");
  P("false *correct*");
  BR();
  P("question 2: rewrite the isEven function *incorrect, the '!= 0' is unnecessary*");
  cout << "5 is " <<  (isEven(5) ? "even" : "odd") << '\n';
  cout << "-4 is " << (isEven(-4) ? "even" : "odd") << '\n';
  cout << "-3 is " << (isEven(-3) ? "even" : "odd") << '\n';
  return 0;
}
