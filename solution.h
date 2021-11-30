//
// Created by Антон Шмидт on 30.11.2021.
//

#ifndef LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_
#define LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_

#include <string_view>

class Solution {
 public:
  int lengthOfLongestSubstring(const std::string& s);

 private:
  int lengthOfLongestSubstringFromBegin(std::string_view s);
};

#endif //LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_
