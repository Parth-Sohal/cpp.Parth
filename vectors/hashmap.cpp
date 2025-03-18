#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {3,-1,4,1};
    map<int,int> hash;
    int n = nums.size();


    for(int i = 1 ; i <= n+1 ;i++){
        hash[i] = 0;
    }

    
    
    for(int i = 0 ;i<nums.size() ;i++){
        if(nums[i] > 0){
            hash[nums[i]]++;
        }
    }

    for(auto i : hash){
        if(i.second == 0){
            cout << i.first << " ";
            break;
        }
    }



    

}