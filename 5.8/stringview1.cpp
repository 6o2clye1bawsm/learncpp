#include <iostream>
#include <string>
#include <string_view>
using namespace std;

void printString(string str) //second copy
{
cout << str << "\n";
//this function doubly copies the string because of
//the way we use it
}

void printStringView(string_view str) //str gives readonly access so its kinda like passing by reference except no really because you can write on a reference
{
cout << str << "\n";
}

int main()
{
using std::literals::string_literals::operator""s;
string s{"this is a string"s};
//uses the std::string type to initialize rather than
//a c-style string

//copying a string just to initialize it is expensive
//and since strings are dynamic i dont know if it can
//be optimized by the compile but its still expensive

printString(s);

string_view sv{"this is a readonly string"};
printStringView(sv);
printStringView(s);//the regular string still isnt
//copied like before

//the following code wont work:
//printString(sv);
//because the compiler doesnt want to implicitly
//cast a stringview to a string since the whole point
//of stringview is to not copy.
//so you have to static cast or make a new regular
//string with the string view as the initializer

string_view viewtest{s};
cout << "right now its viewing our earlier string\n";
cout << "viewtest: ";
printStringView(viewtest);
cout << "ill change the previous string and itll change the stringview\n";
cout << "earlier string: ";
s = "different";
printStringView(s);
cout << "viewtest: ";
printStringView(viewtest); //for some reason this
//has "string" in it at the end still.
//"different" has 9 characters. "this is a" has 9
//characters also.
cout << "ill change the viewtest and the earlier string wont change\n";
viewtest = "the viewtest is viewing this now";
cout << "viewtest: ";
printStringView(viewtest);
cout << "earlier string: ";
printStringView(s);

//namespace string_literals has the s suffix,
//namespace string_view_literals has the sv suffix

cout << "foo\n"s;
cout << "bar\n"sv;

//string_view can also be a constexpr hooray!
constexpr string_view constsv{"hooray"};
//the following code:
//constsv = "banana";
//gives an error

//cout so there is no warning for unused variable
cout << constsv << "\n";
return 0;
}
