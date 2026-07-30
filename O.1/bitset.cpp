#include <bitset>
#include <iostream>
#include <string_view>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  P("std::bitset<N> has 4 member functions that");
  P("help with doing bit manipulation:");
  P("test() queries if a bit is 0 or 1");
  P("set() turns a bit on");
  P("reset() turns a bit off");
  P("flip() flips the value");
  P("they all take the bit position of the bit");
  P("you want as input");
  std::bitset<8> bits{0b0000'0110};
  bits.set(3); //  0000'1110
  bits.flip(2); // 0000'1010
  bits.reset(1); //0000'1000
  BR();
  std::cout << "bits = " << bits << '\n';
  std::cout << "the 3rd bit is = " << bits.test(3) << '\n';
  std::cout << "the 5th bit is = " << bits.test(5) << '\n';
  BR();
  P("we can also name the bits so it's easier");
  P("to understand what they mean");
  BR();

  [[maybe_unused]] constexpr int  isHungry   { 0 };
  [[maybe_unused]] constexpr int  isSad      { 1 };
  [[maybe_unused]] constexpr int  isMad      { 2 };
  [[maybe_unused]] constexpr int  isHappy    { 3 };
  [[maybe_unused]] constexpr int  isLaughing { 4 };
  [[maybe_unused]] constexpr int  isAsleep   { 5 };
  [[maybe_unused]] constexpr int  isDead     { 6 };
  [[maybe_unused]] constexpr int  isCrying   { 7 };

  std::bitset<8> person{0b0000'1000}; //happy
  person.reset(isHappy);
  person.set(isSad);

  std::cout << std::boolalpha;
  cout << "person's bits: " << person << '\n';
  cout << "is person happy? " << person.test(isHappy) << '\n';
  cout << "is person sad? " << person.test(isSad) << '\n';

  BR();
  P("bitset is pretty good at making basic bitmanip");
  P("simple but it only lets you do one at a time,");
  P("and also uses a lot of memory size it rounds");
  P("the space allocated to size_t rather than just");
  P("a 8-byte unsigned int or something.");
  BR();
  P("there are also other useful member functions:");
  P("size() returns the # of bits");
  P("count() returns the # of enabled bits");
  P("all() returns whether all the bits are on");
  P("any() returns if any bits are on");
  P("none() returns if none of the bits are on");
  BR();

  cout << "person has " << person.size() << " bits\n";
  cout << "person has " << person.count() << " bits turned on\n";
  cout << "all the bits are turned on for person: " << person.all() << '\n';
  cout << "any of person's bits are on: " << person.any() << '\n';
  cout << "none of person's bits are on: " << person.none() << '\n';
  return 0;
}
