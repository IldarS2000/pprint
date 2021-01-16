#pragma once
#ifndef PPRINT_H
#define PPRINT_H

#include <iostream>

#include <vector>
#include <list>
#include <deque>
#include <forward_list>

#include <stack>
#include <queue>

#include <set>
#include <unordered_set>

#include <map>
#include <unordered_map>

#include <utility>


template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::list<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::deque<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::forward_list<T>& cont);

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::stack<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::queue<T>& cont);

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::multiset<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::unordered_set<T>& cont);
template <typename T>
std::ostream& operator<<(std::ostream& out, const std::unordered_multiset<T>& cont);

template <typename Key, typename Val>
std::ostream& operator<<(std::ostream& out, const std::map<Key, Val>& cont);
template <typename Key, typename Val>
std::ostream& operator<<(std::ostream& out, const std::multimap<Key, Val>& cont);
template <typename Key, typename Val>
std::ostream& operator<<(std::ostream& out, const std::unordered_map<Key, Val>& cont);
template <typename Key, typename Val>
std::ostream& operator<<(std::ostream& out, const std::unordered_multimap<Key, Val>& cont);

template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& out, const std::pair<T1, T2>& cont);

template <typename T>
void printNonAssociativeContainer(std::ostream& out, const T& cont,
  const char lbracket, const char rbracket, const char delimeter = ',')
{
  out << lbracket;
  auto begin = cont.begin();
  auto preend = std::prev(cont.end());

  for (; begin != preend; ++begin) {
    out << *begin << delimeter << ' ';
  }
  out << *preend;
  out << rbracket;
}

template <typename T>
void printAssociativeContainer(std::ostream& out, const T& cont,
  const char lbracket = '{', const char rbracket = '}', const char delimeter = ',')
{
  out << lbracket;
  auto begin = cont.begin();
  auto preend = std::prev(cont.end());

  for (; begin != preend; ++begin) {
    out << begin->first << ": " << begin->second << delimeter << ' ';
  }
  out << *preend;
  out << rbracket;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::vector<T>& cont)
{
  printNonAssociativeContainer(out, cont, '[', ']');
  return out;
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const std::set<T>& cont)
{
  printNonAssociativeContainer(out, cont, '{', '}');
  return out;
}




#endif // !PPRINT_H


