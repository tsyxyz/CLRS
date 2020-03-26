#include "ch02/binary_add.h"
#include <gtest/gtest.h>

TEST(binary_add, all_zero) {
  const int n = 5;
  const int a[n] = {0, 0, 0, 0, 0};
  const int b[n] = {0, 0, 0, 0, 0};
  int c[n + 1] = {0, 0, 0, 0, 0, 0};
  const int answer[n + 1] = {0, 0, 0, 0, 0, 0};

  ch02::BinaryAdd(a, b, n, c);

  for (int i = 0; i < n + 1; ++i) {
    EXPECT_EQ(c[i], answer[i]);
  }
}

TEST(binary_add, all_one) {
  const int n = 5;
  const int a[n] = {1, 1, 1, 1, 1};
  const int b[n] = {1, 1, 1, 1, 1};
  int c[n + 1] = {0, 0, 0, 0, 0, 0};
  const int answer[n + 1] = {1, 1, 1, 1, 1, 0};

  ch02::BinaryAdd(a, b, n, c);

  for (int i = 0; i < n + 1; ++i) {
    EXPECT_EQ(c[i], answer[i]);
  }
}