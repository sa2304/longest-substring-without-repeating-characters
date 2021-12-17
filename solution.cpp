//
// Created by Антон Шмидт on 30.11.2021.
//

#include <iostream>
#include <unordered_map>

#include "solution.h"

using namespace std;

int Solution::lengthOfLongestSubstring(const string &s) {
  if (s.length() < 2) { return s.length(); }

  int max_length = 1;
  string_view ptr{s};
  unordered_map<char, int> occurrences;
  int first = 0;
  for (int last = 0; last < ptr.length(); ++last) {
    char c = ptr[last];
    ++occurrences[c];
    while (1 < occurrences[c]) {
      --occurrences[ptr[first++]];
    }
    max_length = std::max(max_length, last - first + 1);
  }

  return max_length;
}
