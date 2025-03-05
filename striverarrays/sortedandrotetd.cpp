#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // int k;
    // cin >> k;
    // k = k % arr.size();
    // reverse(arr.begin() , arr.end());
    // reverse(arr.begin() , arr.begin()+k);
    // reverse(arr.begin()+k , arr.end());

    // for(auto i  :  arr){
    //     cout << i << " ";
    // }
    vector<int> nums = {2,1,3,4};
    int ptx = -1;
    for(int i = 0 ; i < nums.size()-1; i++){
        if(nums[i] >  nums[i+1]){
            ptx = i;
            break;
        }
    }
    cout << ptx << endl;
    ptx = ptx + 1;
    reverse(nums.begin(),nums.begin()+ptx);
    
    cout << endl;
    reverse(nums.begin()+ptx,nums.end());
    
    reverse(nums.begin() , nums.end());
    for(auto i : nums){
        cout << i << " ";
    }
    cout << endl;
    if(ptx == -1){
        cout << "sorted";
    }
    else{
        if(is_sorted(nums.begin(),nums.end())){
            cout << "true";
        }
        else{
            cout << "false";
        }
    }
    
}