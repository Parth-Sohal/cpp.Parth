#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {1,0,-1,0,-2,2};
    int target = 0;
    sort(nums.begin(),nums.end());
    vector<vector<int>> result;
    for(int i = 0 ; i < nums.size()-3 ;i++){
        if(i!=0 && nums[i]==nums[i-1]) continue;
        for(int j = i+1 ; j < nums.size()-2 ;j++){
            if( j != i+1 && nums[j]==nums[j-1]) continue;
            int m = j+1;
            int k = nums.size()-1;
            while(m<k){
                if(nums[i]+nums[j]+nums[m]+nums[k]==target){
                    result.push_back({nums[i],nums[j],nums[m],nums[k]});
                    while(m<k && nums[m]==nums[m+1]) m++;
                    while(m<k && nums[k]==nums[k-1]) k--;
                    m++;
                    k--;
                }
                else if((nums[i]+nums[j]+nums[m]+nums[k]<target)){
                    m++;
                }
                else{
                    k--;
                }
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