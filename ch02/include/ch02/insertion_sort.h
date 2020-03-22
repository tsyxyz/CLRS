#pragma once

namespace ch02 {
template <typename Container>
void InsertionSortNonDecrease(Container &seq) {
  for (int j = 0; j < (int)seq.size(); ++j) {
    auto key = seq[j];
    int i = j - 1;
    while (i >= 0 && seq[i] > key) {
      seq[i + 1] = seq[i];
      i = i - 1;
    }
    seq[i + 1] = key;
  }
}

template <typename Container>
void InsertionSortNonIncrease(Container &seq) {
  for (int j = 0; j < (int)seq.size(); ++j) {
    auto key = seq[j];
    int i = j - 1;
    while (i >= 0 && seq[i] < key) {
      seq[i + 1] = seq[i];
      i = i - 1;
    }
    seq[i + 1] = key;
  }
}
}  // namespace ch02