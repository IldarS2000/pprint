#pragma once
#ifndef PPRINT_H
#define PPRINT_H

#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <forward_list>

#include <set>
#include <map>

#include <unordered_set>
#include <unordered_map>

#include <stack>
#include <queue>

#include <utility>


template <typename T>
std::ostream& operator<<(std::ostream& out, std::vector<T> cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, std::set<T> cont);


template <typename T>
std::ostream& operator<<(std::ostream& out, std::vector<T> cont)
{
  out << "[";
  auto begin = cont.begin();
  auto preend = std::prev(cont.end());

  for (; begin != preend; ++begin) {
    out << *begin << ", ";
  }
  out << *preend;
  out << "]";

  return out;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, std::set<T> cont)
{
  out << "{";
  auto begin = cont.begin();
  auto preend = std::prev(cont.end());

  for (; begin != preend; ++begin) {
    out << *begin << ", ";
  }
  out << *preend;
  out << "}";

  return out;
}




#endif // !PPRINT_H


