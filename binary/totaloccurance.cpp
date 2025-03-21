#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int lowerBond(vector<int> &arr,int target){
    int ans = -1;
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            ans = mid;
            // left me search
            end = mid - 1;
        }

        else if(arr[mid] < target){
            //right me search
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return ans;
}

int upperBond(vector<int> &arr,int target){

    int ans = -1;
    int start = 0;
    int end = arr.size()-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid] == target){
            ans = mid;
            //right me search
            start = mid+1;
        }

        else if(arr[mid] < target){
            //right me search
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return ans;
}

int main(){
    vector<int> nums = {2,4,4,4,4,6,8,10};
    int target  = 4;

    int first = lowerBond(nums,target);
    int last = upperBond(nums,target);

    cout << last - first + 1;

    return 0;
    
}