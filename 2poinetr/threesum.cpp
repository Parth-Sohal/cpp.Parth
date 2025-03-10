#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {-1,0,1,2,-1,-4};
    sort(nums.begin(),nums.end());
    int target = 0;
    vector<vector<int>> result;

    for(int n = 0 ; n < nums.size() ; n++){
        if(n>0 && nums[n]==nums[n-1]) continue;
        int i = n+1;
        int j = nums.size()-1;

        while(i<j){
            if(nums[i] + nums[j] + nums[n] == target){
                result.push_back({nums[n],nums[i],nums[j]});
                while((i<j) && (nums[i]==nums[i+1])){
                    i++;
                }
                while((i<j) && (nums[j]==nums[j-1])){
                    j--;
                }
            }
            else if(nums[i] + nums[j] + nums[n] < target){
                i++;
            }
            else{
                j--;
            }
        }
    }
    
    for(int i = 0 ; i < result.size() ;i++){
        for(int j = 0 ; j < result[0].size() ;j++){
            cout << result[i][j] << " "; 
        }
        cout << endl;
    }
}