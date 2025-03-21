#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,11};

    int ans = -1;

    int start = 0;
    int end = arr.size()-1;

    while(start <= end){
        int mid = start + (end - start)/2;

        if(arr[mid] == mid + 1){
            start = mid + 1;
        }
        else{
            ans = mid + 1;
            end = mid - 1;
        }
    }

    cout << ans;
}