#pragma once

namespace ch02 {
template <typename Container>
int LinearSearch(const Container &seq, typename Container::value_type v) {
    for (int i = 0; i < (int)seq.size(); ++i) {
        if (seq[i] == v) return i;
    }
    return -1;
}
}  // namespace ch02