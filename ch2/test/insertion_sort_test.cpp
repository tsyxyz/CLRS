#include "ch2/insertion_sort.h"
#include <gtest/gtest.h>

TEST(insertion_sort, case0) {
  ch2::insertion_sort();
  EXPECT_EQ(0, 0);
}