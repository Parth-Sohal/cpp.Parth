#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,1,0,1,1,0};

    int i = 0 ; 
    int j = 0;

    while(j<nums.size()){
        if(nums[j] == 0){
            swap(nums[i],nums[j]);
            i++;
        }
        j++;
    }

    for(auto i : nums){
        cout << i << " ";
    }
}