#include <iostream>
#include "pprint.h"


class Dummy
{
  friend std::ostream& operator<<(std::ostream& out, const Dummy& dum)
  {
    out << "Dummy object";
    return out;
  }
};


int main()
{
  {
    std::vector<std::set<int>> cont = { {1, 2, 3}, {4, 5, 6} };
    std::cout << cont << "\n\n";
  }

  {
    std::map<std::string, std::set<int>> cont = { {"hello", {1, 2, 3}}, {"aloha", {4, 5, 6}} };
    std::cout << cont << "\n\n";
  }

  {
    std::pair<int, int> pair;
    std::cout << pair << "\n\n";
  }

#if _HAS_CXX17
  {
    std::tuple<std::string, int, std::vector<int>> cont = {
      "string",
      100,
      {1, 2, 3, 4}
    };
    std::cout << cont << "\n\n";
  }
#endif

  return 0;
}
