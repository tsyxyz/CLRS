#include "ch02/selection_sort.h"
#include <gtest/gtest.h>
#include <vector>

TEST(selection_sort, non_decrease) {
  std::vector<int> seq = {8, 1, 3, 0, 2, 7};
  std::vector<int> answer = {0, 1, 2, 3, 7, 8};
  ch02::SelectionSortNonDecrease(seq);

  EXPECT_TRUE(seq == answer);
}