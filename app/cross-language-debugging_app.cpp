#include "cross-language-debugging/cross-language-debugging.hpp"
#include <iostream>

int
main()
{
  int result = crosslanguagedebugging::add_one(1);
  std::cout << "1 + 1 = " << result << std::endl;
}
