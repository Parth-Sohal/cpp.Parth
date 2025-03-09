#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    vector<int> nums = {1,7,3,6,5,6};
    int sum = accumulate(nums.begin(),nums.end(),0);

    int leftSum = 0;
    int rightSum = sum;
    int pivot = -1;
    
    for(int i = 0 ;i < nums.size() ;i++){
        if(i!=0){
            leftSum += nums[i-1];
        }
        rightSum -=nums[i];
        if(leftSum == rightSum){
            pivot = i;
            break;
        }
    }

    cout << pivot;

}