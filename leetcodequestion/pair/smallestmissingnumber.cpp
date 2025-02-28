#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;

int main(){
    
    // for(int i = 1 ; i < arr.size() ;i++){
    //     bool flag = false;
    //     for(int j = 0 ;j < arr.size() ;j++){
    //         if(arr[j] == i){
    //             flag = true;
    //         }
    //     }
    //     if(!flag){
    //         cout << i << endl;
    //         break;
    //     }
    // }
    // optimised 
    // vector<int> arr = {6,5,0,4,3,2,1};
    // int min = -1;
    // for(int i = 0 ; i < arr.size() ;i++){
    //     if(arr[i] == 1){
    //         min = i;
    //     }
    // }
    // if(min == -1)
    // {
    //     cout << 1;
    // }    
    // else{
    //     int count = 1;
    //     int sum = 1;
    //     for(int i = 0 ;i < arr.size() ;i++){
    //         if(arr[i]>1){
    //             count++;
    //             sum+=arr[i];
    //         }
    //     }
    //     cout << count << endl;
    //     cout << sum;
    // }
    // Brute force
    // for(int i = 1 ;  i < arr.size()+1 ;i++){
    //     bool flag = false;
    //     for(int j = 0 ; j < arr.size() ;j++){
    //         if(i == arr[j]){
    //             flag = true;
    //         }
    //     }
    //     if(!flag){
    //         cout << i << " ";
    //         break;
    //     }
    // }

    // int max = INT_MIN;
    // int min = INT_MAX;

    // for(int i = 0 ; i < nums.size() ;i++){
    //     if(nums[i] < min && nums[i] > 0){
    //         min = nums[i];
    //     }
    //     if(nums[i] > max && nums[i] > 0){
    //         max = nums[i];
    //     }
    // }

    // cout << min << " " << max;
    // int elementBtwn = max - min - 1;
    // cout << '\n' << elementBtwn << '\n';

    // int sum = elementBtwn/2*(min+1 + max-1);
    // cout << sum << endl;


    // for(int i = 0 ; i < nums.size() ;i++){
    //     if(nums[i]>0){
    //         if(nums[i]==max || nums[i]==min){
    //             continue;
    //         }
    //         else{
    //             sum = sum - nums[i];
    //             break;
    //         }
    //     }
    // }

    // if(min!=1){
    //     cout << 1;
    // }
    // else if(sum == 0){
    //     cout << max+1;
    // }
    // else{
    //     cout << sum;
    // }

    vector<int> nums = {3,4,-1,1};
    
}