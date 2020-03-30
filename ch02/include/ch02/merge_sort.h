#pragma once

#include <climits>

#define MERGE_INFINITY INT_MAX

namespace ch02 {
template <typename Container>
void Merge(Container &seq, int p, int q, int r) {
  int n1 = q - p + 1;
  int n2 = r - q;
  typename Container::value_type *L =
      new typename Container::value_type[n1 + 1];
  typename Container::value_type *R =
      new typename Container::value_type[n2 + 1];
  for (int i = 0; i < n1; ++i) {
    L[i] = seq[p + i];
  }
  for (int j = 0; j < n2; ++j) {
    R[j] = seq[q + j + 1];
  }
  L[n1] = MERGE_INFINITY;
  R[n2] = MERGE_INFINITY;

  for (int i = 0, j = 0, k = p; k <= r; ++k) {
    if (L[i] <= R[j]) {
      seq[k] = L[i];
      i = i + 1;
    } else {
      seq[k] = R[j];
      j = j + 1;
    }
  }
}

template <typename Container>
void MergeNoSentinel(Container &seq, int p, int q, int r) {
  // TBD
}

template <typename Container>
void MergeSort(Container &seq, int p, int r) {
  if (p < r) {
    int q = int((p + r) / 2);
    MergeSort(seq, p, q);
    MergeSort(seq, q + 1, r);
    Merge(seq, p, q, r);
  }
}
}  // namespace ch02