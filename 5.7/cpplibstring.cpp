#include <iostream>
#include <string>
using namespace std;

int main()
{
string empty{}; //empty string declared

string name{"Brian"};
name = "6o2";
//strings can be reassigned with dynamic length
//which is useful but requires slow dynamic alloc

string num{"45"}; //even though its a number
//it is still text and not integers or anything
//like that

cout << "num is " << num << " and has " << num.length() << " characters\n";
//member function has different syntax
//you should static_cast the size rather than waiting
//for compiler warning since its usually size_t
//the following code:
//cout << "num has " << ssize(num) << " characters\n";
//would give the same result but signed rather than
//unsigned but still big (std::ptrdiff_t)

cout << "Enter your full name\n";
getline(cin >> ws, name); //getline extracts
//whitespace unlike operator>> and std::ws means
//leading whitespace is ignored like how it is
//with operator>>

cout << "Enter your favorite color\n";
string color{};
getline(cin >> ws, color);

cout << "Your name is " << name << " and your favorite color is " << color << "\n";

using namespace std::string_literals;
cout << "foo\n"s;
//the is in in std::literals::string_literals. it is
//like 5.0f but it instead makes c-style strings into
//std::string string literals
//not that useful right now but the auto type makes
//it more useful

//you cant do the following:
//constrxpr std::string
//becaause it isnt really supported in old versions
// wnd only supported in limited cases in new ones
//you should use a string_view indtead which id
//starting to seem like a more constant/less
//variable version of a regular std::string

//quiz question 1
cout << "Your full name: ";
string fullname{};
getline(cin >> ws, fullname);
cout << "Your age: ";
int age{};
cin >> age;
cout << "Length of name + age is: " << age + ssize(fullname) << "\n";
return 0;
//notes w/o code or to be done in future lessons

//everything has null terminators but they arent
//rlly counted brcause theyre implicit

//strings shouldnt be used in function parameters
//by pass by value because they are expensive to
//copy. next lesson goes over string_view which is
//the replacement for it.

//strings use move semantics which make them less
//inefficient to be used in returns by value when
//the returb statement resolves to:
//a local std::string variable,
//a std::string thst has been returned by value from
//another function call or operator,
//a std::string temporary created in the return
//statement.
//or you can just return by (const?) reference
}
