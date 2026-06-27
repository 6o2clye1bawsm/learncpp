#include <iostream>
#include <string>
void printstr(std::string_view str)
{
std::cout << str << '\n'; // compiler probably makes
// it insignificant but using '' to make a char
// should be more space efficient than a "" c-style
// string right?
}

void br()
{
std::cout << '\n';
}

int main()
{
printstr("There are two unary arithmetic operators,");
printstr("the + in +x is the unary plus, -x has the unary minus.");
printstr("The + returns the value of the operand, the - returns");
printstr("the operand multiplied by -1.");
int x{5};
std::cout << "x = " << x << ". -x = " -x << '\n';
br();
br();
printstr("There are five binary arithmetic operators,");
printstr("There's x + y, x - y, x * y, x / y, and x % y");
printstr("+ is add, - is subtract, * is mult, / is div, % is mod/remainder");
int y{4};
std::cout << "y = " << y << ". x + y = " << x + y << ", x - y = " << x - y << ", x * y = " << x * y << ", x % y = " << x % y << '\n';
br();
printstr("The division operator truncates the decimal when doing");
printstr("integer division, if either operands are floating point");
printstr("it will keep the decimal though. It's just to keep the");
printstr("same type if you're dividing integers.");
std::cout << "x / y = " << x / y << ", float x / float y = " << ( static_cast<float>(x) / static_cast<float>(y) ) << '\n';
printstr("You can always just do a static cast on the int you're");
printstr("using if you want to keep the decimal.");
br();
printstr("If you try to divide by INTEGER zero that is undefined");
printstr("and you will probably get a crash. If you go into the");
printstr("code at line 38 you can un-comment-out the line and see");
printstr("it yourself. You'll get an error with -Werror.");
// std::cout << 5 / 0;
printstr("If you do the same with a FLOATING POINT zero then it");
printstr("will give Nan or Inf on a IEEE754-compliant architecture");
br();
br();
printstr("There are the same thing for assignment operators. You");
printstr("just use the operator but also assign it to the left");
printstr("at the same time, so doing x += y is the same as doing");
printstr("x = ( x + y ).");
std::cout << "x = " << x << ", y = " << y << ", after x += y, x = " << ( x += y ) << ".\n"; // '.\n' is a multicharacter variable
printstr("This is called a modifying operator because it changes");
printstr("one of the operands. Other assignment operators do this");
printstr("too like the bitwise assignment ones (>>=) and the inc/");
printstr("decrement ones (++)");
std::cout << "x = " << x << ", after x++, x = " << ++x << '\n';
return 0;
}
