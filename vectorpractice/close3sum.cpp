#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> nums = {0,0,0};
    int target = 1;
    sort(nums.begin(),nums.end());

    int absDistance = INT_MAX;
    int total;

    for(int i = 0 ; i < nums.size() ;i++){
        int low = i+1;
        int high = nums.size()-1;

        while(low<high){
            // cout << "Curretnt abs distance = " << absDistance << endl;
            // cout << nums[i] << " " << nums[low] << " " << nums[high] << endl;

            int sum = nums[i] + nums[low] + nums[high];

            // cout << "currewnt sum =  " <<sum << " "  ;

            if(sum < target){
                low++;
            }
            else{
                high--;
            }

            int currentDist = abs(target - sum);

            // cout << "currentDist = "<< currentDist << endl;

            if(currentDist < absDistance){
                absDistance = currentDist;
                total = sum;
            }

        }
        
    }
    cout << total;
}