#include "binarySearch.h"
#include "gtest/gtest.h"

TEST(binary_search, CorrectElements){
  int arr[] = {1,2,3,4};
  EXPECT_EQ(2, binary_search(arr, 3, 0, 3));
  EXPECT_EQ(3, binary_search(arr, 4, 0, 3));
  EXPECT_EQ(1, binary_search(arr, 2, 0, 3));
}

TEST(binary_search, NotThere){
  int arr[] = {1,2,3,4};
  EXPECT_EQ(-1, binary_search(arr, 5, 0, 3));
}
