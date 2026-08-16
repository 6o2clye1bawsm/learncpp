#include <iostream>
#include <string_view>
#include <format>
#include <cstdint>
using namespace std;

void P(string_view str) {
  cout << str << '\n';
}

void BR() {
  cout << '\n';
}

void printBinary() {
  cout << "enter a # 0-255: ";
  uint8_t flags{};
  cin >> flags;
  cout << format("{:b}", flags) << '\n';
}

void exhaustivePrintBinary() {
  cout << "enter a # 0-255: ";
  uint8_t flags{};
  cin >> flags;
  if (flags >= (128)) {
    cout << "1";
    flags -= 128;
  } else { 
    cout << "0";
  }
  if (flags >= (64)) {
    cout << "1";
    flags -= 64;
  } else { 
    cout << "0";
  }
  if (flags >= (32)) {
    cout << "1";
    flags -= 32;
  } else { 
    cout << "0";
  }
  if (flags >= (16)) {
    cout << "1";
    flags -= 16;
  } else { 
    cout << "0";
  }
  if (flags >= (8)) {
    cout << "1";
    flags -= 8;
  } else { 
    cout << "0";
  }
  if (flags >= (4)) {
    cout << "1";
    flags -= 4;
  } else { 
    cout << "0";
  }
  if (flags >= (2)) {
    cout << "1";
    flags -= 2;
  } else { 
    cout << "0";
  }
  if (flags >= (1)) {
    cout << "1";
    flags -= 1;
  } else { 
    cout << "0";
  }
}

int main() {
  P("q1: 0100'1101 -d> ?");
  P("guarunteed to be unsigned, no twos complement");
  P("2^6 + 2^3 + 2^2 + 2^0 = 77 *correct*");
  BR();
  P("q2: 93 -b> unsigned, use methods 1 and 2");
  P("method two:");
  P("64 bit on, 93-64=29");
  P("32 bit off");
  P("16 bit on, 29-16=13");
  P("8 bit  on, 13-8=5");
  P("4 bit  on, 5-4=1");
  P("2 bit  off");
  P("1 bit  on, 1-1=0");
  P("101'1101");
  P("method one:");
  P("93/2= 46 r1");
  P("46/2= 23 r0");
  P("23/2= 11 r1");
  P("11/2=  5 r1");
  P("5/2=   2 r1");
  P("2/2=   1 r0");
  P("1/2=   0 r1");
  P("101'1101");
  P("*correct but had to look back to remember method one");
  BR();
  P("q3: -93 -b> signed, use twos complement");
  P("93 -b> 0101'1101");
  P("0101'1101 -inv> 1010'0010");
  P("1010'0010 + 1 = 1010'0011");
  P("1010'0011 *correct*");
  BR();
  P("q4: 1010'0010 -d> unsigned");
  P("2^7 + 2^5 + 2^1 = 162 *correct*");
  BR();
  P("q5: 1010'0010 -d> signed");
  P("~1010'0010 = 0101'1101");
  P("0101'1101 + 1 = 0101'1110");
  P("2^6 + 2^4 + 2^3 + 2^2 + 2 = 94");
  P("-94 *correct*");
  BR();
  P("q6: write a -b> function for 0-255");
  printBinary();
  P("*correct but you used uint8 as the input type, so");
  P("instead of taking the full int, the program thought");
  P("it was a char and only took the first number*");
  exhaustivePrintBinary();
  P("same issue with input type, using if statements");
  P("instead conditional operators and just printing");
  P("the return value is inefficient");
  return 0;
} 
