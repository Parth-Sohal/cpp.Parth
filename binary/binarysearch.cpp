#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>

#include <vector>
using namespace std;

void kthSmallest(vector<int> arr,int k){
    sort(arr.begin(),arr.end());
    if(k>arr.size()){
        cout << " no smallest element" << " " ;
    }
    cout << arr[k-1];

}

int BinarySearch(int arr[] , int n , int target)
{
    int low = 0 ;
    int high = n - 1 ;
    int ans = -1;

    while(low<= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            ans = mid;
            high  = mid - 1;
        }

        else if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }

    return ans;
}
int main()
{
    vector<int> arr = {3,1,2,5,4};
    kthSmallest(arr,3);
    // int target;

   
    // cout << "Answer = " << result; 
    return 0;
}