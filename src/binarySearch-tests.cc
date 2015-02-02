#include "binarySearch.h"
#include "gtest/gtest.h"

TEST(binary_search, int_find_correct_indices){
  int arr[] = {1,2,3,4};
  EXPECT_EQ(0, binary_search(arr, 1, 0, 3));
  EXPECT_EQ(1, binary_search(arr, 2, 0, 3));
  EXPECT_EQ(2, binary_search(arr, 3, 0, 3));
  EXPECT_EQ(3, binary_search(arr, 4, 0, 3));
}

TEST(binary_search, int_not_there){
  int arr[] = {1,2,3,4};
  EXPECT_EQ(-1, binary_search(arr, 5, 0, 3));
}

TEST(binary_search, double_find_correct_indices){
  double arr[] = {1.0, 2.1, 3.4, 3.8};
  EXPECT_EQ(0, binary_search(arr, 1.0, 0, 3));
  EXPECT_EQ(1, binary_search(arr, 2.1, 0, 3));
  EXPECT_EQ(2, binary_search(arr, 3.4, 0, 3));
  EXPECT_EQ(3, binary_search(arr, 3.8, 0, 3));
}

TEST(binary_search, double_not_there){
  double arr[] = {1.0, 2.1, 3.4, 3.8};
  EXPECT_EQ(-1, binary_search(arr, 8.0, 0, 3));
}
