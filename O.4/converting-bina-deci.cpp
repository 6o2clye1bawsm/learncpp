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
  P("decimal: 5619 = (9*10^0) + (1*10^1) + (6*10^2) + (5*10^3)");
  P("binary: 0101 = (1*2^0) + (0*2^1) + (1*2^2) + (0*2^3)");
  P("decimal increases by a factor of 10 with each");
  P("place. binary is the same, but with a factor");
  P("of two. we can use this knowledge to convert");
  P("between binary and decimal.");
  BR();
  P("best for deci -b> bina: compare, subtract, assign");
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
  P("this method is good for computers because it can");
  P("just print the bits and it doesn't have to store");
  P("anything but the difference");
  BR();
  P("only applies to SIGNED types");
  P("twos complement: invert, add 1.");
  return 0;
}
