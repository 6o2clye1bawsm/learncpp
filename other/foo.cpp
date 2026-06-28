#include <iostream>
#include <vector>

bool getYorN() {
  char x{};
  std::cin >> x;
  
  if (x == 'y') {
    std::cout << "yay yes\n";
    return 1;
  } else if (x == 'n') {
    std::cout << "why no\n";
    return 0;
  } else {
    std::cout << "put y or n\n";
    getYorN();
    return 1;
  }
}

int main()
{
  std::vector<int> x{1, 2, 3, 4, 5};
  
  for (auto i{x.size()}; i-- > 0;)
  {
    std::cout << "y or n?\n";
    if (getYorN()){
      std::cout << "hi " << x[i];
    }
    std::cout << '\n';
  } 
  return 0;
}
