#include "ch02/linear_search.h"

#include <gtest/gtest.h>

#include <vector>

TEST(linear_search, has_value) {
    std::vector<int> seq = {8, 1, 3, 0, 2, 7};
    int v = 2;
    int answer = 4;
    int result = ch02::LinearSearch(seq, v);
    EXPECT_TRUE(result == answer);
}

TEST(linear_search, has_no_value) {
    std::vector<int> seq = {8, 1, 3, 0, 2, 7};
    int v = 9;
    int answer = -1;
    int result = ch02::LinearSearch(seq, v);
    EXPECT_TRUE(result == answer);
}