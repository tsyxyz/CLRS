#include "ch02/merge_sort.h"

#include <gtest/gtest.h>

#include <vector>

TEST(merge_sort, merge) {
    std::vector<int> seq = {8, 2, 4, 5, 7, 1, 2, 3, 6, 0};
    std::vector<int> answer = {8, 1, 2, 2, 3, 4, 5, 6, 7, 0};
    ch02::Merge(seq, 1, 4, 8);

    EXPECT_TRUE(seq == answer);
}

TEST(merge_sort, sort) {
    std::vector<int> seq = {5, 2, 4, 7, 1, 3, 2, 6};
    std::vector<int> answer = {1, 2, 2, 3, 4, 5, 6, 7};
    ch02::MergeSort(seq, 0, 7);

    EXPECT_TRUE(seq == answer);
}

TEST(merge_sort, merge_no_sentinel) {
    std::vector<int> seq = {8, 2, 4, 5, 7, 1, 2, 3, 6, 0};
    std::vector<int> answer = {8, 1, 2, 2, 3, 4, 5, 6, 7, 0};
    ch02::MergeNoSentinel(seq, 1, 4, 8);

    EXPECT_TRUE(seq == answer);
}

TEST(merge_sort, sort_no_sentinel) {
    std::vector<int> seq = {5, 2, 4, 7, 1, 3, 2, 6};
    std::vector<int> answer = {1, 2, 2, 3, 4, 5, 6, 7};
    ch02::MergeSortNoSentinel(seq, 0, 7);

    EXPECT_TRUE(seq == answer);
}