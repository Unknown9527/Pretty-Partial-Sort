#include <iostream>
#include <vector>
#include "src/lib/solution.h"
using namespace std;

int main(){
    
    // cout << "Hello World" << endl;
    
    Solution solution;
    vector<int> input = {9,7,5,11,12,2,14,3,10,6};
    int i = 9;
    solution.printVec(input);
   // solution.specialSort(input, i);
    solution.printVec(solution.specialSort(input, i));
    
    
    return 0;
}
