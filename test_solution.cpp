//
// Created by Антон Шмидт on 30.11.2021.
//

#include <gtest/gtest.h>

#include "solution.h"

using namespace std;

class TestSolution : public ::testing::Test {};

TEST_F(TestSolution, lengthOfLongestSubstring) {
  Solution s;
  ASSERT_EQ(s.lengthOfLongestSubstring(""s), 0);
  ASSERT_EQ(s.lengthOfLongestSubstring("a"s), 1);
  ASSERT_EQ(s.lengthOfLongestSubstring("b"s), 1);
  ASSERT_EQ(s.lengthOfLongestSubstring("aa"s), 1);
  ASSERT_EQ(s.lengthOfLongestSubstring("ab"s), 2);
  ASSERT_EQ(s.lengthOfLongestSubstring("abb"s), 2);
  ASSERT_EQ(s.lengthOfLongestSubstring("abz"s), 3);
  ASSERT_EQ(s.lengthOfLongestSubstring("abcabcbb"s), 3);
  ASSERT_EQ(s.lengthOfLongestSubstring("bbbbb"s), 1);
  ASSERT_EQ(s.lengthOfLongestSubstring("pwwkew"s), 3);
}