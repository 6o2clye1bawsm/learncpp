#include <iostream>
#include <string>

void br()
{
std::cout << "\n";
}

int getV()
{
std::cout << "Enter a value: ";
int x{};
std::cin >> x;
return x;
}

void doCalc(int a, int b, int c)
{
std::cout << a * b + c << "\n";
}

int main()
{
// we are gonna be learning about operators and
// operator precedence <pemdas but for code>, ill
// use <> rather than () because i have a feeling
// () is gonna be used a lot

// in 2+3, 2 and 3 are operands, + is the operator

// in 2 + 3 * 5, the compiler decides how to group
// numbers for use at runtime
// 
// higher precedence means its grouped first, and
// since * and / <prec 5> are higher than + and -
// <prec 6>, the grouping is:
std::cout << 2 + ( 3 * 5 ) << " = 2 + ( 3 * 5 ) after precedence is applied\n";

br();

// operators also have associativity, which will
// tell the compiler whether to group something
// like the following from left to right or from
// right to left if they have equal prec. since -
// has left to right asso, the compiler groups
// it like the following:
std::cout << ( 5 - 3 ) - 1 << " = ( 5 - 3 ) - 1 after associativity is applied\n";

br();

// 1 has highest prec, and 17 has lowest.
// some have R->L asso, like 16. this makes sense
// for something like = which has prec 16, you would
// wanna group what youre assigning first
int y = 4; std::cout << "y = 4\n";
int z = 2; std::cout << "z = 2\n";
int x = y*= z;
std::cout << "The right side of the assignment operators is done first: " << x << " = (y *= z)\n";
// 
// some have L->R asso, like prec 6, which is where
// we find + and -
std::cout << "+ and - are done L->R, " << x - 3 + 2 << " = x - 3 + 2\n";

br();

// you can always put your own parenthesis if you
// wanna do your own grouping:
std:: cout << "Manual grouping " << ( 5 + 3 ) * 2 << " = ( 5 + 3 ) * 2\n";
// you can also use this to manually group operands
// if it isn't already obvious, nobody wants to look
// stuff up in the prec table for something like:
// if (1 && ( 0 || 1 )) {std:: cout << "t" << "\n"};
//
// learncpp says a good rule is to do grouping on
// everything except +-*/ but also sometimes for
// assignment if theres multiple assignment operators
// in a row:
// x = (y *= z)

br();

// executing operators is called value computation
std::cout << "Value Compuation: 4 + 6 * 2 -> 4 + 12 -> 16\n";
// getting values from operands is called evaluation
std::cout << "Evaluating x: " << x << " = x\n";

br();

// one thing to be aware of is the randomness of the
// evaluation of operands:
int w = 5; std::cout << "w = 5\n";
std::cout << x * y + z * w << " = x * y + z * w and will always be the same, but the compiler is the one\n";
std::cout << "who decides between doing (x * y) and (z * a) first in the processed expression (x * y) + (z * a)\n";
std::cout << "and can be unexpected in ways that cause problems in some programs.\n";

// for example, this is random for me:
doCalc(getV(),getV(),getV());
std::cout << "ambiguous operand ordering?\n";
// because i dont know if the compiler wants to do
// the getV()'s LtR or RtL. clang is LtR and gcc RtL.
//
// you can fix this by assigning each of the doCalc()
// inputs to a variable, which are assigned from top
// to bottom like any other code:
int a{getV()}; std::cout << a << " = a, first operand\n";
int b{getV()}; std::cout << b << " = b, second operand\n";
int c{getV()}; std::cout << c << " = c, third operand\n";

doCalc(a,b,c); std::cout << " = a * b + c, less ambiguous\n";
// we just have to remember that the parameters of
// functions arent dependent on ordering because its
// evaluation rather than value compuatation

//quiz
//
std::cout << "x = 3 + 4 + 5 (" << 3+4+5 << ")is the same as x = ( ( 3 + 4 ) + 5 ) (" << ((3+4)+5) << ") because + has\n";
std::cout << "higher precedence than = <x=(3+4+5)> and LtR association\n";
br();
std::cout << "x = y = z is the same as x =(y = z) beacause = has RtL association\n";
br();
std::cout << "z *= ++y + 5 turns into z *= (++y + 5) because + has higher precedence than =, then into z *= ((++y) + 5)\n";
std::cout << "because ++ has higher precedence than +\n";
br();
std::cout << "a || b && c || d turns into a || (b && c) || d because && has the highest precedence, then into\n";
std::cout << "(a || (b && c)) || d because the || have LtR association\n";










return 0;
}

