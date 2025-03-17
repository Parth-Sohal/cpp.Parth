#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;



int main(){
    vector<int> nums = {1,3,4,2,2};
    for(int i = 0 ; i < nums.size() ;i++){
        if(nums[abs(nums[i])] > 0){
            // cout << arr[abs(arr[i])] << endl; 
            nums[nums[i]] = -1 * nums[nums[i]];
        }
        else{
            // cout << abs(arr[i]);
            break;
        }
    }
}