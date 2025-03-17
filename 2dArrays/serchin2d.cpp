#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {
        {1,4,7,11,15},
        {2,5,8,12,19},
        {3,6,9,16,22},
        {10,13,14,17,24},
        {18,21,23,26,30}
    };
    int target;
    cin >> target;

    int i = 0;
    int j = 0;

    while (1)
    {
        if(arr[i][j] == target){
            cout << true;
            break;
        }

        

        

    }
    
}