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
  P("this is very explanation-heavy");
  BR();
  P("in modern computers the smallest data you can");
  P("access is a byte, which is usually 8 bits. but");
  P("even though a bool is only 1 bit, itll take up");
  P("a whole byte of memory. usually we don't care");
  P("but in some storage-intensive situations people");
  P("need to have all 8 of those bits used. the");
  P("scenario im most likely to use bit manp in is");
  P("graphics but most of the time in general prg");
  P("it's not that useful");
  BR();
  P("until now we have used each variable to hold");
  P("one object, but now we will separate that big");
  P("object into a bunch of tiny bools.");
  BR();
  P("bit review: 0 is false/off, 1 is true/on, switching between is called a flip");
  BR();
  P("we call them bit flags because they signal");
  P("some condition is true but idk why we would");
  P("call them flags because dont bits always");
  P("signal something is on/off?");
  BR();
  P("to pick the # of flags we can choose an");
  P("unsigned integer of the size we want or we");
  P("can use the <bitset> header.");
  BR();
  P("bit positions are from right to left, and");
  P("starting from 0, so if the byte is 8 bits long");
  P("the positions would be:");
  P("76543210");
  return 0;
}
