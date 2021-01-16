# pprint

You just need add `#include "pprint.h"` statement to project to use pretty printing for most classes of standart library.

--- 

pretty print works with following classes:
* vector
* list
* deque
* forward_list
* stack
* queue
* set
* multiset
* unordered_set
* unordered_multiset
* map
* multimap
* unordered_map
* unordered_multimap

#if _HAS_CXX17
* tuple

#endif

* pair

---

### Examples
```
std::vector<std::set<int>> cont = { {1, 2, 3}, {4, 5, 6} };
std::cout << cont << "\n\n";
```
output: `[{1, 2, 3}, {4, 5, 6}]`

```
std::map<std::string, std::set<int>> cont = { {"hello", {1, 2, 3}}, {"aloha", {4, 5, 6}} };
std::cout << cont << "\n\n";
```
output: `{aloha: {4, 5, 6}, hello: {1, 2, 3}}`

```
std::tuple<std::string, int, std::vector<int>> cont = {
  "string",
  100,
  {1, 2, 3, 4}
};
#if _HAS_CXX17
  std::cout << cont << "\n\n";
#endif
```
output: `(string, 100, [1, 2, 3, 4])`

for user classes you just need to add friend overload function `operator<<` 

```
class Dummy
{
  friend std::ostream& operator<<(std::ostream& out, const Dummy& dum)
  {
    out << "Dummy object";
    return out;
  }
};
```

```
std::list<Dummy> cont = {
  Dummy(),
  Dummy()
};
std::cout << cont << "\n\n";
```
output: `[Dummy object, Dummy object]`
