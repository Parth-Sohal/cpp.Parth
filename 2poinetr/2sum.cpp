#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    // for(int i = 0 ; i < arr.size() ;i++){
    //     for(int j = i+1 ; j < arr.size()  ;j++){
    //         for(int k = j+1 ; j<arr.size() ;j++){
    //             if(arr[i]+arr[j]+arr[k]==target){
    //                 cout << arr[i] << " " <<arr[j] << " " << arr[k] << endl;
    //             }
    //         }
    //     }
    // }
    vector<int> arr = {1, 3, 5, 8, 12};
    int target = 25;
    int low = 0 , mid = 1 , high = arr.size()-1;
    vector<vector<int>> nums;
    while(mid != high){
        if(arr[low]+arr[mid]+arr[high] == target){
            nums.push_back({arr[low],arr[mid],arr[high]});
        }
        if(arr[low]+arr[mid]+arr[high] > target)
        {
            high--;
        }
        else{
            low++,mid++;
        }
    }
    for(int i = 0 ; i < nums.size() ;i++){
        for(int j = 0 ; j < nums[i].size() ;j++){
            cout << j << " ";
        }
    }
}
