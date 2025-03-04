#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {0,1,2,1,0,1,2,0,2,1,0,1,1,0,1,1};
    int low = 0, mid = 0 , high = arr.size()-1;
    while(mid<=high){
        if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
        else if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }
    for(auto i : arr){
        cout << i << " ";
    }
}
