#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4,5};
    

    vector<int> temp(nums.size(),0);

    // temp.pop_back();

    while(nums.size()!=1){
        temp.pop_back();
        int n = nums.size();
        for(int i = 1 ; i < n ;i++){
            temp[i-1] = (nums[i-1]+nums[i])%10;
        }
        for(auto i : temp){
            cout << i << " ";
        }
        nums = temp;
        cout << endl;
    }

    
}