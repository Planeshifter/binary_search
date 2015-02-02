template <typename T>
int binary_search(T seq[], T query, int first, int last){
  if (last < first){
    return -1;
  }

  int mid = first + ((last - first) / 2);

  if (query == seq[mid]){
    return mid;
  } else if (query < seq[mid]){
    return binary_search(seq, query, first, mid - 1);
  } else {
    return binary_search(seq, query, mid + 1, last);
  }
}
