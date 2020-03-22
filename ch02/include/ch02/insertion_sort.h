#pragma once

#include <cstddef>

namespace ch02 {
template <typename Container>
void InsertionSortNonDecrease(Container &seq) {
  for (size_t j = 0; j < seq.size(); ++j) {
    auto key = seq[j];
    size_t i = j - 1;
    while (i >= 0 && seq[i] > key) {
      seq[i + 1] = seq[i];
      i = i - 1;
    }
    seq[i + 1] = key;
  }
}

template <typename Container>
void InsertionSortNonIncrease(Container &seq) {
  for (size_t j = 0; j < seq.size(); ++j) {
    auto key = seq[j];
    size_t i = j - 1;
    while (i >= 0 && seq[i] < key) {
      seq[i + 1] = seq[i];
      i = i - 1;
    }
    seq[i + 1] = key;
  }
}
}  // namespace ch02