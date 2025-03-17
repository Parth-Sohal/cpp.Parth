#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,2,-3,4,-5,6};

    int store = 0;
    int iterate = 0;

    while(iterate<nums.size()){
        if(nums[iterate]<0){
            swap(nums[store],nums[iterate]);
            store++;
        }

        iterate++;
    }

    

    for(auto i : nums){
        cout << i << " ";
    }
}