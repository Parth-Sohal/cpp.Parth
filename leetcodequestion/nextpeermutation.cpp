#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>
#include <limits.h>
using namespace std;



int main(){
    vector<int> arr = {1,4,3,2};

    int pidx = -1;

    for(int i = arr.size()-2 ; i>=0 ;i--){
        if(arr[i] < arr[i+1]){
            pidx = i;
            break;
        }
    }  
    
}