#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {1,2,3,1};
    int i = 0  , j = arr.size()-1;
    bool cond = true;
    while(i<j){
        if(arr[i]!=arr[j]){
            cond = false;
        }
        i++;
        j--;
    }
    if(cond){
        cout << "True";
    }
    else{
        cout << "False";
    }
}
