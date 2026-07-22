#include <iostream>
#include <string_view>
using namespace std;

constexpr void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int getVal()
{
    cout << "Enter value: ";
    int x{};
    std::cin >> x;
    return x;
}

int main() {
  P("we saw this ?: operator before when we were doing");
  P("exponents, if i remember correctly it was used to");
  P("check if a number was even or odd.");
  BR();
  P("the conditional operator takes the form:");
  P("condition ? expression1 : expression2");
  P("so its like if(condition) expression 1 else expression 2");
  P("asking 'is the condition true?', yes is 1 and no is 2");
  P("here is a test of it:");
  int x {getVal()};
  int y {getVal()};
  (x > y) ? cout << "the first number is bigger\n" : cout << "the first number isn't bigger\n";
  BR();
  P("the conditional operator is also useful because it");
  P("evaluates with the expression which means it can");
  P("be used in a constexpr when if-else statements can't");
  P("be used (vars defined in if-else statements go away");
  P("at the end of the statement like functions)");
  BR();
  P("its good to use parenthesis when you're using");
  P("the conditional operator because it makes it");
  P("easier to separate arguments, stops errors,");
  P("and increases understanding");
  cout << "x = " << x << ", y = " << y << '\n';
  cout << "10 - x > y ? x : y evalutes to " << 10 - x > y ? x : y << '\n';
  cout << "10 -(x > y ? x : y)evalutes to " << 10 - ( x > y ? x : y ) << '\n';
  P("make sure to use parenthesis on the whole");
  P("?: operation, so (x?:y:z), and also on the");
  P("condition if it contains any operators, so");
  P("(x>y)?a:b");
  BR();
  P("also, the types of the two result expressions");
  P("(which are a and b in the above operation)");
  P("must be the same, so like both int. or they");
  P("have to be convertible. do the converting");
  P("manually so you know whats going on, or just");
  P("use an if else statement (you can return any");
  P("type through those");
  BR();
  P("Summary");
  P("use the conditional operator when:");
  P("initializing an object which has one of two possible values");
  P("assigning to an object one of two possible values");
  P("returning one of two values from a func");
  P("printing one of two values");
  BR();
  P("its basically just an if else statement");
  P("manually so you know whats going on, or just");
  P("use an if else statement (you can return any");
  P("type through those");
  BR();
  P("Summary");
  P("use the conditional operator when:");
  P("initializing an object which has one of two possible values");
  P("assigning to an object one of two possible values");
  P("returning one of two values from a func");
  P("printing one of two values");
  BR();
  P("its basically just an if else statement");
  return 0;
} 
