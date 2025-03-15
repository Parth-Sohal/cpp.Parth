#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

void change2d(vector<vector<int>> &arr){
    cout << arr.size();
}

int main(){
    vector<vector<int>> mat = {{0, 0},
    {0,1,0,5},
   {1,1,1,7,8,9}};
    // change2d(mat);

    for(auto& row : mat){
        for(auto& col : row){
            cout << col << " ";
        }
        cout << endl;
    }
}