#include <iostream>
#include <string>
#include "html-like.h"

void p(std::string_view str)
{
std::cout << str << '\n';
}
void br()
{
std::cout << '\n';
}
