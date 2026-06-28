#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

struct Test
{
  int x{32};
  char a{3};
};

int main()
{
  std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

  Test *a = new Test;

  int z = a->x;

  std::cout << z;

  return 0;
}
