#include <cassert>
#include <iostream>

#include "solution.h"

using namespace std;

int LongestSubstringLength(const string& s, char c, int length) {
  return (string::npos == s.find(c)) ? length + 1 : length;
}

int LongestSubstringLength(const string& s) {
  if (s.length() == 0) return 0;
  else return LongestSubstringLength(s.substr(1), s.back(), 0);
}

void TestLongestSubstringLength() {

}

int main() {
  TestLongestSubstringLength();
  std::cout << "Ok!" << std::endl;
  return 0;
}
