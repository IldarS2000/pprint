# pprint

You just need add `#include "pprint.h"` statement to use pretty printing for most classes of standart library.

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

* utility

---

### Examples
```
std::vector<std::set<int>> cont = { {1, 2, 3}, {4, 5, 6} };
std::cout << cont << "\n\n";
```
output: `[{1, 2, 3}, {4, 5, 6}]`
