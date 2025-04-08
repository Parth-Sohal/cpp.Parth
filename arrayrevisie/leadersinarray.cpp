#include<iostream>
using namespace std;
#include<cmath>
#include<limits.h>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>

int main(){
    vector<int> arr = {16, 17, 4, 3, 5, 2};
    int n =  arr.size();

    // int i = 0 ;
    // int j = i+1;
    // int n = nums.size();
    // int k = 0;

    // vector<int> ans ;
    
    // while(i < nums.size()){

    //     cout << "i == " << i << "   j == " << j << endl;
        
    //     if(j==n){
    //         // ans.push_back(arr[i]);
    //         nums[k++] = nums[i];
    //         i = i+1;
    //         j = i+1;
    //     }

    //     else if(nums[j] > nums[i]){
    //         i = j;
    //         j = i+1;
    //     }

    //     else{
    //         j++;
    //     }

    // }

    // nums.resize(k);

    int max = INT_MIN;
    vector<int> ans ;

    for(int i = n - 1 ; i >= 0 ;i--){
        if(arr[i] > max){
            ans.push_back(arr[i]);
            max = arr[i];
        }
    }
    
    reverse(ans.begin(),ans.end());
    
    for(auto i : ans){
        cout << i << " ";
    }
    



}
