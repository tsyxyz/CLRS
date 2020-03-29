#include "ch02/merge_sort.h"
#include <gtest/gtest.h>
#include <vector>

TEST(mege_sort, merge) {
    std::vector<int> seq = {
        8, 2, 4, 5, 7, 1, 2, 3, 6, 0
    };
    std::vector<int> answer = {
        8, 1, 2, 2, 3, 4, 5, 6, 7, 0
    };
    ch02::Merge(seq, 1, 4, 8);

    EXPECT_TRUE(seq == answer);
}