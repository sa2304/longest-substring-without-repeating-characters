#include <cassert>
#include <iostream>

using namespace std;

int LongestSubstringLength(const string& s) {
  // FIXME
  return 0;
}

void TestLongestSubstringLength() {
  assert(LongestSubstringLength(""s) == 0);
  assert(LongestSubstringLength("a"s) == 1);
  assert(LongestSubstringLength("b"s) == 1);
  assert(LongestSubstringLength("aa"s) == 1);
  assert(LongestSubstringLength("ab"s) == 2);
  assert(LongestSubstringLength("abb"s) == 2);
  assert(LongestSubstringLength("abz"s) == 3);
  assert(LongestSubstringLength("abcabcbb"s) == 3);
  assert(LongestSubstringLength("bbbbb"s) == 1);
  assert(LongestSubstringLength("pwwkew"s) == 3);
}

int main() {
  TestLongestSubstringLength();
  std::cout << "Ok!" << std::endl;
  return 0;
}
