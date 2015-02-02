#include <iostream>
#include "binarySearch.h"

using namespace std;

int main(){
  int intList[] = {2, 4, 7, 10, 11, 45, 50, 59, 60, 66, 69, 70, 79};
  
  cout << binary_search(intList, 11, 1, 13);
  return 1;
}
