#pragma once

namespace ch02 {
template <typename Container>
void SelectionSortNonDecrease(Container &seq) {
  for (int i = 0; i < (int)(seq.size() - 1); ++i) {
    auto key = seq[i];
    int smallest = i;
    for (int j = i + 1; j < (int)seq.size(); ++j) {
      if (seq[j] < seq[smallest]) {
        smallest = j;
      }
    }
    seq[i] = seq[smallest];
    seq[smallest] = key;
  }
}
}  // namespace ch02