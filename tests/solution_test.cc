#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

using namespace std;

void PrintVector(vector<int> & input){
    
    for(int i =0; i < input.size(); i++){
        cout << input[i] <<" ";
    }
    cout << endl;
}

//input 0
TEST(SmlOLarComTest0, SmlOLarComTest0) {
  Solution solution;

  vector<int> input0 = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  vector<int> result1 = {3, 2, 5, 6, 12, 7, 14, 9, 10, 11};
  int Ith = 9;
 
  EXPECT_EQ(solution.specialSort(input0, Ith), result1);
}

//input 1
TEST(SmlOLarComTest1, SmlOLarComTest1) {
  Solution solution;

  vector<int> input0 = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  vector<int> result1 = {9, 7, 5, 11, 12, 2, 6, 3, 10, 14};
  int Ith = 6;
 
  EXPECT_EQ(solution.specialSort(input0, Ith), result1);
}

//input 2
TEST(SmlOLarComTest2, SmlOLarComTest2) {
  Solution solution;

  vector<int> input0 = {9, 7, 5, 11, 12, 2, 14, 3, 10, 6};
  vector<int> result1 = {2, 3, 5, 11, 12, 9, 14, 7, 10, 6};
  int Ith = 7;
 
  EXPECT_EQ(solution.specialSort(input0, Ith), result1);
}