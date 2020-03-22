#include "ch02/insertion_sort.h"
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

TEST(insertion_sort, non_decrease) {
  std::vector<int> seq = {8, 1, 3, 0, 2, 7};
  std::vector<int> answer = {0, 1, 2, 3, 7, 8};
  ch02::InsertionSortNonDecrease(seq);
  // for (auto i : seq) {
  //   std::cout << i << " ";
  // }
  // std::cout << std::endl;
  EXPECT_TRUE(seq == answer);
}

TEST(insertion_sort, non_increase) {
  std::vector<int> seq = {8, 1, 3, 0, 2, 7};
  std::vector<int> answer = {8, 7, 3, 2, 1, 0};
  ch02::InsertionSortNonIncrease(seq);
  for (auto i : seq) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  EXPECT_TRUE(seq == answer);
}