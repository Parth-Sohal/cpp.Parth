#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

// check if arrays is rotated and sorted

int main()
{
    vector<int> arr = {1,1,2,3,4};
    bool cond = true;
    for(int i = 0 ; i <= arr.size()-1 ; i++){
        if(arr[i] > arr[i+1]){
            cond = false; 
            break ;
        }
    }
    if(cond){
        cout << "ARRAY IS SORTED";
    }
    else{
        cout << "NOT SORTED";
    }
    return 0;
}