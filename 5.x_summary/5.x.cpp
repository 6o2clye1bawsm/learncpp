#include <string>
#include <iostream>

//corrections in comments

std::string getName(int x)
{
  std::cout << "Enter the name of person #" << x << ": ";
  std::string n{};
  getline(std::cin >> std::ws, n);
  return n;
}

int getAge(std::string_view n) //used to be a string, corrected to stringview
{
  std::cout << "Enter the age of " << n << ": ";
  int x{};
  std::cin >> x;
  return x;
}

void compareAges(std::string_view n1, int a1, std::string_view n2, int a2) //used to be strings, corrected to stringviews
{
  if (a1 > a2) {
    std::cout << n1 << " (age " << a1 << ") is older than " << n2 << " (age " << a2 << ").\n";
  } else if (a2 > a1) { 
    std::cout << n2 << " (age " << a2 << ") is older than " << n1 << " (age " << a1 << ").\n";
  } else {
    std::cout << n1 << " is the same age as " << n2 << ", " << a1 << ".\n";
  }
}

int main()
{
  std::string name1{getName(1)};
  int age1{getAge(name1)};
  
  std::string name2{getName(2)};
  int age2{getAge(name2)};

  compareAges(name1,age1,name2,age2);

  return(0);
}

//quiz (corrections marked with <||>)

// Named constants are often better because they
// show what the literal means
// <|also changes the value everywhere its used|>

// constexpr are better because they prevent naming
// conflicts and show up in the debugger

// uint8_t is usually a char type, not an int type
// the 16 is a magical number
// <|the '.\n' is a multicharacter literal|>

// std::string is modifiable and std::string_view
// is only able to view. stringviews can be dangled
// <|strings are also expensive and often copied|>

// age1 cant be constexpr because it's determined
// during runtime <|through function getAge()|>
