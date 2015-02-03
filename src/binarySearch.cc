#include <vector>

using namespace std;

/*
binary search:
returns index for @query element in input array @seq, -1 if not contained.

parameters:
@seq: sorted array of C type array. use of templates => supports arbitrary data types
for which operators "==" and "<" are defined
@query: element which has to be searched for, must be of same data type as elements
in @seq
@first: index of first element of array
@last: index of last element of array
*/
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


/*
binary search:
returns index for @query element in input array @seq, -1 if not contained.

parameters:
@seq: sorted array of C++ vector containers. use of templates => supports
arbitrary data types for which operators "==" and "<" are defined
@query: element which has to be searched for, must be of same data type as elements
in @seq
@first: index of first element of array
@last: index of last element of array
*/
template <typename T>
int binary_search(vector<T> seq, T query, int first, int last){

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
