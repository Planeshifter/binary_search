#include <iostream>
#include <string>
#include <vector>
#include "binarySearch.h"

using namespace std;

int main(){

  cout << "We start by entering a vector of a chosen data type" << endl;

  int dtype;
  cout << "Pick either 1) int, 2) double, 3) string:" << endl;
  cin >> dtype;
  switch(dtype){
    case 1:
      {
        cout << "Enter an int vector:" << endl;
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
        cin >> search_value;
        cout << "The return value of the binary_search function is:" << endl;
        cout << binary_search(input_vector, search_value, 0,
          input_vector.size()) << endl;
      }
    break;
    case 2:
      {
        cout << "Enter a vector of doubles:" << endl;
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
        cout << "Enter a vector of strings:" << endl;
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
        cin >> search_value;
        cout << "The return value of the binary_search function is:" << endl;
        cout << binary_search(input_vector, search_value, 0,
          input_vector.size()) << endl;
      }
    break;
    default:
      cout << "Please enter a valid data type next time. Aborting.";
  }

  return 0;
}
