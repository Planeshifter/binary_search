#include <iostream>
#include <string>
#include <vector>
#include "binarySearch.h"

using namespace std;

int main(){

  cout << "We start by entering a vector of a chosen data type" << endl;

  int dtype;
  cout << "Enter a number: 1 for int, 2 for double or 3 for string:" << endl;
  cin >> dtype;
  switch(dtype){
    case 1:
      {
        cout << "Input a sorted int vector. Type a number, hit enter to add
          element to vector. Type -1 to finish vector construction." << endl;
        vector<int> input_vector;
        int input_value;
        while(cin >> input_value && input_value != -1){
          input_vector.push_back(input_value);
        }
        cout << "You entered the following vector:" << endl;
        for (int c : input_vector){
          cout << c << ' ';
        }
        cout << endl;
        cout << "Enter a value to search for in the vector:" << endl;
        int search_value;
        cout << "Enter a value to search for in the vector:" << endl;
        while(cin >> search_value && search_value != -1){
          cout << "The return value of the binary_search function is:" << endl;
          cout << binary_search(input_vector, search_value, 0,
            input_vector.size()) << endl;
          cout << "Enter a value to search for in the vector:" << endl;
        }
      }
    break;
    case 2:
      {
        cout << "Input a sorted vector of doubles. Type a number, hit enter to
          add element to vector. Type -1 to finish vector input." << endl;
        vector<double> input_vector;
        double input_value;
        while(cin >> input_value && input_value != -1){
          input_vector.push_back(input_value);
        }
        cout << "You entered the following vector:" << endl;
        for (double c : input_vector){
          cout << c << ' ';
        }
        cout << endl;
        double search_value;
        cout << "Enter a value to search for in the vector:" << endl;
        while(cin >> search_value && search_value != -1){
          cout << "The return value of the binary_search function is:" << endl;
          cout << binary_search(input_vector, search_value, 0,
            input_vector.size()) << endl;
          cout << "Enter a value to search for in the vector:" << endl;
        }
      }
    break;
    case 3:
      {
        cout << "Input a sorted vector of strings. Type a string, hit enter to
          add it to the vector. Type -1 to finish vector construction." << endl;
        vector<string> input_vector;
        string input_value;
        while(cin >> input_value && input_value != "-1"){
          input_vector.push_back(input_value);
        }
        cout << "You entered the following vector:" << endl;
        for (string c : input_vector){
          cout << c << ' ';
        }
        cout << endl;
        cout << "Enter a value to search for in the vector:" << endl;
        string search_value;
        cout << "Enter a value to search for in the vector:" << endl;
        while(cin >> search_value && search_value != -1){
          cout << "The return value of the binary_search function is:" << endl;
          cout << binary_search(input_vector, search_value, 0,
            input_vector.size()) << endl;
          cout << "Enter a value to search for in the vector:" << endl;
        }
      }
    break;
    default:
      cout << "Please enter a valid data type next time. Aborting.";
  }

  return 0;
}
