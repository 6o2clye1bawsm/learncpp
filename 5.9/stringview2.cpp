#include <iostream>
#include <string>
#include <string_view>
using namespace std;

string getString()
{
string s{ "Return string" };
return s;
}

void printString(string_view str)
{
cout << str << "\n";
}

int main()
{
string a{"this is a string"};
string s{a}; // string does not want to place respos-
// -ibility on a so it makes a copy to become owner.
// string view doesnt do this and just views it w/o
// becoming the owner. copying is expensive

cout << s << "\n";

// criteria to use a string view and make sure the
// owner of the string doesnt alter it:
//
//1. can the string be destroyed?
//  no, its destroyed at the end of the main function
//2. can the string be modified?
//  no, there is nothing modifying the string during
//  the programs runtime
//3. does our string modify the string while using it
//  no
//
// this means we dont need a copy and since its a
// string, a stringview can be used

string_view sv{a}; //a lot more efficient
cout << sv << "\n";

// string views are usually safe to use for function
// parameters because control is given to the funct
// and the caller cant do anything until the function
// finishes

printString(sv);

// learncpp doesnt explain it in this lesson but
// string_view is preferable to const string& for
// function parameters

{
string unsafeString{"This is not safe!"};
cout << unsafeString << "\n";
// the following code is not good:
//
//sv = unsafeString;
//
// because the string is destroyed at the end of the
// nested block so the string sv will become invalid
}
// when exiting scope
// the same thing happens with functions; if you set
// the return type to stringview and return a funct-
// -ion std::string then it will go out of scope, be
// destroyed, and made invalid. if its a c-style
// string it doesn't have this issue, and if you're
// returning a function parameter (what the caller
// inputted into the function) it's in the caller's
// scope so if it's not temporary (a variable is not
// temporary) it'll work. if it's used as a function
// parameter and destroyed though, maybe the return
// value of another function, then itll have the
// same issue. idk about that last part though

// if you try to initialize a string view with a
// function return value, it won't work because
// the function's data is temporary and will be
// destroyed after the function is run. this makes
// the string view dangle and creates undefined
// behavior. here is an example
//
//string_view badSV{ getString() };
//cout << badSV << "\n";

// similar will happen if you try to initialize with
// a temporary string like this:
//
//using namespace std::string_literals;
//string_view badSV2{ "String"s };
//cout << badSV2 << "\n";

// if you have a stringview viewing a string and
// the string is altered, it can leave it dangling
// (string reallocated) or the length of the
// stringview will be incorrect (no reallocation)
//
string mutableString{ "String" };
string_view badSV3{ mutableString };
cout << badSV3 << ", mutable string edited, ";
mutableString = "A string but longer";
cout << badSV3 << "\n";
//
// now the stringview is invalid

// you can revalidate the stringview by doing
// another assignment to the string or any other
// valid string
//
badSV3 = mutableString;
cout << badSV3 << "\n";

// finally back to normal stringview stuff and not
// just stuff about owners and viewers

string P{"Peach"};
string_view windowSV{P};

// since we are only viewing P, we can alter how
// we are viewing without changing the actual data
// like the curtains of a window

cout << windowSV << ": before prefix removal,\n";
windowSV.remove_prefix(1);
cout << windowSV << ": after prefix removal.\n";

// the number inside gives the amount of characters
// removed. i wonder what a negative value would do

//windowSV.remove_prefix(-1);
//cout << "Negative prefix removal: " << windowSV << "\n";

// it gives an error because the parameter for remo-
// ve_prefix is unsigned int. you can only open the
// curtains by reassigning the stringview

// this 'curtain' (substring) behavior also means
// that a stringview can be null-terminated some-
// times and not null-terminated other times. if
// you need a null-terminator you can convert it to
// a string but if not its not necessary and the
// stringview takes care of its own length

// when to use string vs when to use string_view
// variables
//   string
//   it needs to be modified, you want to store
//   user text, its a function that returns a 
//   std::string (returning string less expensive
//   bc move semantics or something)
//
//   stringview
//   you need read-only of a string that wont change
//   you want a constant for a c-style string
//
// function parameters
//   string
//   the string needs to be modified without effec-
//   ting the caller
//   you dont wanna use references
//
//   stringview
//   the function needs a read-only string
//   the function needs to work with strings that
//   arent null terminated
//
// return values
//   string
//   the return value is a std::string local
//   variable(?) or function parameter
//   the return value is a function call or operator
//   that returns a std::string by value
//
//   stringview
//   the function returns a c-style string
//   the function returns a stringview(?)

//lvalue references? for advanced users
//   const std::string&
//   you are using cpp14 or older and it needs to be
//   readonly
//   youre using another function that needs one of
//   these const std::strings (which has to be null
//   terminated which string_view isnt)
//   std::string&
//   youre using std::string as an out parameter???
//   12.13 has in and out parameters
//   you are calling other functions that require a
//   std::string& that isn't const
//
//   more advanced stuff; return stringview when
//   writing an accessor for a stringview(?)
//   return string& when the function returns with
//   a string& (what else would it return)
//   return const string& when the function returns
//   with a const string&, writing an accessor for a
//   const string or string, the function returns a
//   static(?), local or global, const std::string

//summary
// string is expensive to copy, passing string by
// value makes a copy, avoid making a string which
// is shortlived, modifying a string will invalidate
// it's views, it is okay to return string because
// of move semantics (move sematics is so unique of
// a phrase it will be easy to remember this)
//
// stringview is used mostly for function parameters
// and returning string literals (cstyle strings),
// when a string is destroyed the stringviews are
// invalid so pay attention to your scopes, invalid
// stringviews are undefined, they are sometimes not
// nullterminated so if something needs a string it
// might not work because strings are nullterminated 

return 0;
}

