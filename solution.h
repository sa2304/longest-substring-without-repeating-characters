//
// Created by Антон Шмидт on 30.11.2021.
//

#ifndef LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_
#define LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_

#include <string>

class Solution {
 public:
  int lengthOfLongestSubstring(const std::string& s);

 private:
  int lengthOfLongestSubstringFromBegin(const std::string& s);
};

#endif //LONGEST_SUBSTRING_WITHOUT_REPEATING_CHARACTERS__SOLUTION_H_
