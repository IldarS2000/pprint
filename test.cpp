#include <iostream>
#include "pprint.h"


int main()
{
  std::vector<std::set<int>> v = { {1, 2, 3}, {4, 5, 6} };
  std::cout << v << '\n';


  return 0;
}
