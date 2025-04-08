#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {9,7,5,3,4,6,8};

    int start = 0;
    int end = arr.size()-1;

    while(start < end){
        int mid = start + (end - start)/2;

        if(arr[mid] > arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
    } 
    
    cout << end << "  " <<arr[end];
}