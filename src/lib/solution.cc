#include "solution.h"
#include <iostream>
#include <vector>

using namespace std;

void Solution::printVec(vector<int> inputVec){
    for(int i = 0; i < inputVec.size(); i++){
        cout << inputVec[i] << " ";
    }
    cout << endl;
}

vector<int> Solution::specialSort(vector<int> inputVec, int num){
    int target = inputVec[num];
    // count how many numbers < target
    int smallNum = 0;
    for(int i = 0; i < inputVec.size(); i++){
        if(inputVec[i] < target){
            smallNum++;
        }
    }
    // cout << smallNum << endl;
    // put target to the place where it should be
    swap(inputVec[num], inputVec[smallNum]);
    // swap(inputVec[num], inputVec[0]);
    
    
    
    int curSmallNum = smallNum - 1;
    // cout << curSmallNum << endl;
    // if a (smaller than target) number found, put it on the left of target...
    for(int j = 0; j < inputVec.size(); j++){
        if(inputVec[j] < target){
            swap(inputVec[j], inputVec[curSmallNum]);
            curSmallNum--;
            // cout << curSmallNum << endl;
        }
    }
    
    return inputVec;
}

