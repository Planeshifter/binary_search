#ifndef BINARY_SEARCH_H
#define BINARY_SEARCH_H

#include <vector>

template <typename T>
int binary_search(T seq[], T query, int first, int last);

template <typename T>
int binary_search(std::vector<T> seq, T query, int first, int last);


#include "binarySearch.cc"
#endif
