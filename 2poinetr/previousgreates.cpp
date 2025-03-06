#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<int> height = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> newArr(height.size(),0);

    int max  =  -1;
    for(int i = 0 ; i < height.size() ;i++){
        newArr[i] = max;
        if(height[i] > max){
            max = height[i];
        }
    }

    for(auto i : newArr){
        cout << i << " ";
    }

}