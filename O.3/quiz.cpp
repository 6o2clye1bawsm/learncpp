#include <iostream>
#include <string_view>
#include <cstdint>
#include <bitset>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

int main() {
  //q1 code
  [[maybe_unused]] constexpr std::uint8_t option_viewed{ 0x01 };
  [[maybe_unused]] constexpr std::uint8_t option_edited{ 0x02 };
  [[maybe_unused]] constexpr std::uint8_t option_favorited{ 0x04 };
  [[maybe_unused]] constexpr std::uint8_t option_shared{ 0x08 };
  [[maybe_unused]] constexpr std::uint8_t option_deleted{ 0x10 };

  std::uint8_t myArticleFlags{ option_favorited };

  // Place all lines of code for the following quiz here
  myArticleFlags |= option_viewed;
  cout << "the article was " << ((myArticleFlags & option_deleted)?"deleted":"not deleted") << '\n';
  myArticleFlags &= ~option_favorited;

  std::cout << std::bitset<8>{ myArticleFlags } << '\n';

  P("q1");
  P("a) add a line of code to set the article viewed");
  P("use |= *correct*");
  P("b) add a line of code to check if the article was deleted");
  P("use & *correct*");
  P("c) add a line of code ot clear the article as fav");
  P("use &= ~ *half points, should also cast option_favorited to uint8 even though its already uint8");
  P("d *extra) why are the following two lines identical?");
  P("d) myflags &= ~(option4 | option5); // turn options 4 and 5 off");
  P("d) myflags &= ~option4 & ~option5; // turn options 4 and 5 off");
  P("the top one puts the options together through");
  P("the or| operator before inverting, the bottom");
  P("inverts them then since they both have one");
  P("missing in their options they & together and");
  P("end up having both missing. the myflags does");
  P("&= to combine and also has those missing.");
  P("the answer thats on the rubric is probably");
  P("just de morgan's law though");
  P("*incorrect it is demorgans lawS and you didnt");
  P("explain how distributing means flipping the");
  P("or|s to and&s while flipping and&s to or|s too");
  BR();
  P("the reason why the first method works is also");
  P("because when they're combined, then inverted,");
  P("everything else is a bunch of 1s so if you &");
  P("then it stays the same if its a 1 (both 1),");
  P("but also stays the same if it's a 0 (since it");
  P("uses the and& operator).");
  BR();
  BR();
  P("note: i wonder how much longer until we get to pointers. then after that data structures");
  return 0;
} 
