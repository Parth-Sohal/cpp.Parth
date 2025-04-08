#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {-10,-5,1,2,4};

    int start = 0 ;
    int end = arr.size()-1;
    int ans = -1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == mid){
            ans = mid;
            break;
        }

        if(arr[mid] < mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }

    cout << ans;
}