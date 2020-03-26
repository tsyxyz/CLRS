#pragma once

namespace ch02 {
void BinaryAdd(const int* a, const int* b, int n, int* c) {
  int remain = 0;
  int carry = 0;
  for (int i = n - 1; i >= 0; --i) {
    int sum = a[i] + b[i] + carry;
    remain = sum % 2;
    carry = sum / 2;
    c[i + 1] = remain;
  }
  c[0] = carry;
}
}  // namespace ch02