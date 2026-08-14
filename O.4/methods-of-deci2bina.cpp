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
  P("method 1:division");
  P("in this method you divide continually by 2");
  P("and write down the remainders. order them");
  P("from the bottom up, then you have the binary");
  P("value");
  P("148 / 2 = 74 r0");
  P("74 / 2 = 37 r0");
  P("37 / 2 = 18 r1");
  P("18 / 2 = 9 r0");
  P("9 / 2 = 4 r1");
  P("4 / 2 = 2 r0");
  P("2 / 2 = 1 r0");
  P("1 / 2 = 0 r1");
  P("148 in binary is 1001'0100");
  BR();
  P("this method is best for humans because its");
  P("only dividing by two. it's bad for computing");
  P("because you need to store all the remainders");
  P("to be printed in reverse at the end.");
  BR();
  BR();
  P("method 2:compare, subtract, assign");
  P("the largest power of 2 that doesnt go over 148");
  P("is 128, so we start with that.");
  P("- our current value, 148, is greater than");
  P("128, so the value of the 128 bit is 1. the left");
  P("over is 20, so we need to find the bits that");
  P("will give us 20");
  P("- our current value, 20, is less than 64, which");
  P("is the next bit position. so the 64 bit is 0");
  P("- our current value, 20, is less than 32, which");
  P("is the next bit position. so the 32 bit is 0");
  P("- our current value, 20, is greater than 16, so");
  P("the 16 bit is 1. the left over is 4, so we");
  P("need to find the bits that will give us 4.");
  P("- our current value, 4, is less than 8, which");
  P("is the next bit position. so the 8 bit is 0");
  P("- our current value, 4, is equal to 4, which is");
  P("the next bit position. so the 4 bit is 1. the");
  P("left over is 0, so the remaining (2, 1) bits");
  P("are 0");
  BR();
  P("this method is okay for humans on small #s. it");
  P("is good for computers because it can just print");
  P("and it doesn't have to store anything, as each");
  P("position is found as it comes up");
  BR();
  BR();
  P("method 3:division without remainders");
  P("148 / 128 = 1 with remainder. Since 1 is odd, this bit is a 1.");
  P("148 / 64 = 2 with remainder. Since 2 is even, this bit is a 0.");
  P("148 / 32 = 4 with remainder. Since 4 is even, this bit is a 0.");
  P("148 / 16 = 9 with remainder. Since 9 is odd, this bit is a 1.");
  P("148 / 8 = 18 with remainder. Since 18 is even, this bit is a 0.");
  P("148 / 4 = 37 with remainder. Since 37 is odd, this bit is a 1.");
  P("148 / 2 = 74 with remainder. Since 74 is even, this bit is a 0.");
  P("148 / 1 = 148 with remainder. Since 148 is even, this bit is a 0.");
  BR();
  P("this method is bad for humans because of all");
  P("the division. computers are also bad at doing");
  P("divison so it's not really good for either.");


  return 0;
}
