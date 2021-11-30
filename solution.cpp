//
// Created by Антон Шмидт on 30.11.2021.
//

#include <iostream>
#include <unordered_set>

#include "solution.h"

using namespace std;

int Solution::lengthOfLongestSubstring(const string &s) {
  if (s.length() < 2) { return s.length(); }

  int count = 0;
  auto rem = s;
  do {
    count = std::max(count, lengthOfLongestSubstringFromBegin(rem));
    rem = rem.substr(1);
  } while (!rem.empty());
  return count;
}

int Solution::lengthOfLongestSubstringFromBegin(const string &s) {
  unordered_set<char> chars;
  for (const auto &c: s) {
    if (chars.count(c)) { break; }
    chars.insert(c);
  }
  return chars.size();
}
