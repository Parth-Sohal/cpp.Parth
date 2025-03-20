#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int binnary(vector<int> &arr , int start , int end ,int target){

    int mid = start + (end - start)/2;

    if(end < start){ // base case
        return -1;
    }

    if(arr[mid] == target){ // answer 
        return mid;
    }

    else if(arr[mid] < target){ 
        start = mid+1;
        return binnary(arr,start,end,target);
    }

    else{
        end = mid - 1;
        return binnary(arr,start,end,target);
    }
}

int main(){
    vector<int> arr = {1,2,3,5,7,11};

    cout << binnary(arr,0,arr.size()-1,2);
}