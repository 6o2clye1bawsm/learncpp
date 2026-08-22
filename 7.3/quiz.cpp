#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void HR() {
  cout << '\n';
}

void smallerLarger() {
  cout << "Enter an integer: ";
  int smaller{};
  cin >> smaller;
  
  cout << "Enter a larger integer: ";
  int larger{};
  cin >> larger;

  if ( larger < smaller ) {
    cout << "Swapping the values\n";
    int a{larger};
    larger = smaller;
    smaller = a;
  }

  cout << "The smaller value is " << smaller << '\n';
  cout << "The larger value is " << larger << '\n';
}

int main() {
  P("q1: write a program that asks for two ints,");
  P("one named smaller and one larger.");
  P("if the user entered a smaller value for the");
  P("'larger' integer, use a block and temporary");
  P("variable to swap them.");
  P("smaller should have the smaller value, and");
  P("larger should have the larger value.");

  smallerLarger();

  P("*correct*");
  // learncpp says you can use the std::swap func from
  // the utility header but i dont think anybody is
  // remembering that

  HR();
  P("q2: a. what is the difference between scope,");
  P("duration, and lifetime?");
  P("b. what are the default scope and duration of");
  P("local vars?");
  P("a.");
  P("scope: where the var can be used & seen");
  P("duration: the lines in code where the var is accessible");
  P("lifetime: the actual time when the var is alive?");
  P("b.");
  P("scope: in the block it's defined in");
  P("duration: instantization to end of block");
  P("*kinda right but duration are the rules and here are official correct answers:*");
  P("A variable’s scope determines where the variable is accessible within the source code. Duration defines the rules that govern when a variable is created and destroyed. A variable’s lifetime is the actual time between its creation and destruction.");
  P("");
  P("Local variables have block scope, which means they can be accessed from their point of definition to the end of the block they are defined within.");
  P("");
  P("Local variables have automatic duration, which means they are created at the point of definition, and destroyed at the end of the block in which they are defined.");

  return 0;
}
